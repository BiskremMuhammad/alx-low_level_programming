#include "main.h"
#include <string.h>

/**
 * _memset - fn to fills the first n bytes of the memory
 * @s: pointer to the block of memory to fill
 * @b: the value to set
 * @n: the number of bytes to be set to the value
 *
 * Return: the pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p;

	p = memset(s, b, n);

	return (p);
}
