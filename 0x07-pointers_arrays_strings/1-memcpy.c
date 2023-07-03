#include "main.h"
#include <string.h>

/**
 * _memcpy - function copies n bytes from memory area with a character
 * @dest: copy destination var
 * @src: copy source
 * @n: number of bytes
 *
 * Return: pointer to stored destination var
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p;

	p = memcpy(dest, src, n);

	return (p);
}
