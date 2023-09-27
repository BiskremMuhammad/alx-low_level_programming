#include "lists.h"

/**
 * print_listint - fn name
 * @h: list header
 *
 * Return: {size_t} the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t c = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		c += 1;
		cursor = cursor->next;
	}
	return (c);
}
