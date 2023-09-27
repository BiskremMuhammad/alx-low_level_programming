#include "lists.h"

/**
 * listint_len - get the length of a list
 * @h: head of the list
 *
 * Return: {size_t} number of elements
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
