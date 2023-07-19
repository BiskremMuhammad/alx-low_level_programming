#include "function_pointers.h"

/**
 * array_iterator - fn to iterate though array
 * @array: the array
 * @size: size of the array
 * @action: an action fn pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
