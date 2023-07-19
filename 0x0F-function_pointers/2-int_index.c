#include "function_pointers.h"

/**
 * int_index - fn to search index of item in an array
 * @array: the array
 * @size: array size
 * @cmp: fn pointer to compare item
 *
 * Return: {int} index of the item in the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, idx;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	idx = -1;
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			idx = i;
			break;
		}
	}

	return (idx);
}
