#include "main.h"
#include <string.h>

/**
 * str_concat - fn to concat two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: {char} pointer to the full string
 */
char *str_concat(char *s1, char *s2)
{
	char *t;
	unsigned long int i, c;

	t = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (t == NULL)
		return (NULL);

	c = 0;
	for (i = 0; s1 != NULL && i < strlen(s1); i++)
	{
		t[c] = s1[i];
		c++;
	}
	for (i = 0; s2 != NULL && i < strlen(s2); i++)
	{
                t[c] = s2[i];
		c++;
	}

	return (t);
}
