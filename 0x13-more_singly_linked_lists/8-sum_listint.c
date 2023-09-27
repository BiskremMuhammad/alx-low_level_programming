#include "lists.h"

/**
 * sum_listint - sum of a linked list
 * @head: head of the list
 *
 * Return: {int} sum result
 */
int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	size_t sum = 0;

	while (cursor != NULL)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
