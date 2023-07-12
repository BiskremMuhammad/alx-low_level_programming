#include "main.h"

/**
 * alloc_grid - fn to allocate space for two dimentional array
 * @width: array width
 * @height: array height
 *
 * Return: {int} pointer to the allocated space
 */
int **alloc_grid(int width, int height)
{
	int **t, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	t = malloc(sizeof(int*) * width * height);
	if (t == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			t[i][j] = 0;
	}

	free(t);
	return (t);
}
