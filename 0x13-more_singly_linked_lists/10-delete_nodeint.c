#include "lists.h"

/**
 * delete_nodeint_at_index - deleted node index
 * @head: pointer to the head of the list
 * @index: index of the node to be added
 *
 * Return: {int} node index
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old = NULL;
	listint_t *prev_node = NULL;
	unsigned int i = 0, list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (i == index)
		{
			old = *head;
			if (i == 0)
			{
				*head = old->next;
				free(old);
				return (1);
			}
			prev_node->next = old->next;
			free(old);
			return (1);
		}
		else if ((i + 1) == index)
			prev_node = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}

/**
 * listint_len - length of a linked list
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
