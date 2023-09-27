#include "lists.h"

/**
 * add_nodeint - adds node to a list
 * @head: pointer to the head of the list
 * @n: integer to be used as content
 *
 * Return: {listint_t} address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n;

	n = malloc(sizeof(listint_t));
	if (n != NULL)
	{
		n->n = n;
		n->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		n->next = *head;
	*head = n;
	return (n);
}
