#include "main.h"

/**
 * _strncat - fn to concat two strings
 * @dest: the first string to append text to
 * @src: the second string to add
 * @n: length of src to add
 *
 * Return: {string} the full string saved in dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
