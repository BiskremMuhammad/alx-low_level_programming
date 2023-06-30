#include "main.h"

/**
 * _strncpy - fn to copy two a string to another
 * @dest: the string to copy to
 * @src: the source string to copy it's value
 * @n: the length of the source to copy
 *
 * Return: {string} the stirng to save to the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
