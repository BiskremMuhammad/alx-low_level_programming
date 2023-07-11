#include "main.h"

/**
 * create_array - fn to create an array with dynamic size
 * @size: size of the array
 * @c: the character to fill the array with
 *
 * Return: {char} pointer to the allocated space
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	t = malloc(sizeof(char) * size);
	if (t == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
		t[i] = c;

	return (t);
}
