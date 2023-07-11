#include "main.h"
#include <string.h>

/**
 * _strdup - fn to copy a string
 * @str: the string to copy
 *
 * Return: {char} pointer to the copied string
 */
char *_strdup(char *str)
{
	char *t;
	int i;

	if (str == NULL)
		return (NULL);

	t = malloc(sizeof(char) * strlen(str));
	if (t == NULL)
		return (NULL);
	
	for (i = 0; i < strlen(str); i++)
		t[i] = str[i];

	return (t);
}
