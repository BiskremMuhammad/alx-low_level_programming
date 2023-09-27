#include "lists.h"

/**
 * insert_nodeint_at_index - index of created item
 * @head: pointer to the head of the list
 * @idx: index of the node to be added
 * @n: content of the new node
 *
 * Return: {listint_t} node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *prev_node = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || idx > listint_len(*head))
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				new_node->next = *head;
				*head = new_node;
				return (new_node);
			}
			new_node->next = prev_node->next;
			prev_node->next = new_node;
			return (new_node);
		}
		else if ((i + 1) == idx)
			prev_node = *head;
		head = &((*head)->next);
		i++;
	}
	return (NULL);
}

/**
 * listint_len - length of linked list
 * @h: head of the list
 *
 * Return: {size_t} list length
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
