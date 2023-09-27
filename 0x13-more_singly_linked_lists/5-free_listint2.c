#include "lists.h"

/**
 *free_listint2 - free linked list in a different way
 *@head: pointer to the head of the list
 *
 *Return: {void}
 */

void free_listint2(listint_t **head)
{
	listint_t *cursor;
	listint_t **tmp = head;

	if (tmp != NULL)
	{
		while (*head != NULL)
		{
			cursor = *head;
			free(cursor);
			*head = (*head)->next;
		}

		*tmp = NULL;
	}
}
