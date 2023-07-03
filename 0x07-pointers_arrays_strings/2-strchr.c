#include "main.h"
#include <string.h>

/**
 * _strchr - fn to return a character from a string on a position
 * @s: the string
 * @c: the character to get
 *
 * Return: pointer to the character's position
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = strchr(s, c);

	return (p);
}
