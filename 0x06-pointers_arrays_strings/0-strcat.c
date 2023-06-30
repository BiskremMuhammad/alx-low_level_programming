#include "main.h"

/**
 * _strcat - fn to concat two stings
 * @dest: first string to append text to
 * @src: the seocond string to add
 *
 * Return: {char} the new string
 */
char *_strcat(char *dest, char *src)
{
	char res[100] = strcat(*dest, *src);
	return (&res);
}
