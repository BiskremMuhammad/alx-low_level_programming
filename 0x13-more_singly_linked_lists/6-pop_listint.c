#include "lists.h"

/**
 *pop_listint - delete linked list head
 *@head: head of the list
 *
 *Return: {int} deleted node data
 */

int pop_listint(listint_t **head)
{
	listint_t *p;
	int data;

	if (*head == NULL)
		return (0);

	p = *head;
	data = p->n;
	free(p);

	*head = (*head)->next;
	return (data);
}
