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
	char s[50];

	strncpy(s, src, n);
	return (strcat(dest, s));
}
