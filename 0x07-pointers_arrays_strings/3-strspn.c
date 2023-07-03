#include "main.h"
#include <string.h>

/**
 * _strspn - fn to get the number of bytes in initial segment s
 * @s: the segment
 * @accept: the cretieria
 *
 * Return: pointer to the number of bytes on the segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int *p;

	*p = strspn(s, accept);

	return (p);
}
