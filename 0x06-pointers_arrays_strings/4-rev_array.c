#include "main.h"

/**
 * reverse_array - fn to reverse an array
 * @a: the array to reverse
 * @n: the length of the array
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int ar[n];

	j = 0;

	for (i = n - 1; i >= 0; i--)
	{
		ar[j] = *(a + i);
		j++;
	}

	for (i = 0; i < n; i++)
	{
		*(a + i) = ar[i];
	}
}
