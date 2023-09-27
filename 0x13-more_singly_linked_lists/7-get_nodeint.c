#include "lists.h"

/**
 * get_nodeint_at_index - returns item of a linked list at index
 * @head: pointer to the head of the list
 * @index: index of the node required
 *
 * Return: {listint_t} node index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i <= index)
		{
			if (i == index)
			{
				cursor = head;
				break;
			}
			head = head->next;
			i++;
		}
		else
			return (NULL);
	}
	return (cursor);
}
