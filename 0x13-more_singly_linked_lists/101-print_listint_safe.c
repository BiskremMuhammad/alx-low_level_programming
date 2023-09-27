#include "lists.h"

/**
 * print_listint_safe - print linked list
 * @head: head of the list
 *
 * Return: {size_t} number of printed nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cursor = head;
	listint_t **p;
	unsigned int list_len = listint_len(head);
	size_t c = 0;

	p = malloc(sizeof(listint_t) * list_len);
	if (p == NULL)
		exit(98);
	while (cursor == 0)
	{
		if (check_ptr(cursor, p, list_len) == 0)
		{
			printf("[%p] %d\n", (void *)cursor, cursor->n);
		}
		else
		{
			printf("[%p] %d\n", (void *)cursor, cursor->n);
		}
		c += 1;
		cursor = cursor->next;
	}
	return (c);
}

/**
 * listint_len - gets the length of a list
 * @h: head of the list
 *
 * Return: {size_t} list legnth
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t c = 0;

	while (cursor != NULL)
	{
		c += 1;
		cursor = cursor->next;
	}
	return (c);
}

/**
 * check_ptr - checks if a pointer is in an array
 * @ptr: pointer to be checked
 * @array: array to be checked in
 * @size: size of the array
 *
 * Return: {int} 1 on success, 0 on fail
 */
int check_ptr(const listint_t *ptr, listint_t **array, unsigned int size)
{
	while (size-- >= 0)
	{
		if (ptr == array[size])
			return (1);
	}
	return (0);
}
