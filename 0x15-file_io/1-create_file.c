#include "main.h"
#include <stddef.h>

/**
 * _strlen - get length of a string
 * @str: string
 *
 * Return: {int}
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * create_file - fn name
 * @filename: filename
 * @text_content: file contents
 *
 * Return: {int} 1 on success, 0 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int f, whites;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
    
	if (text_content != NULL)
	{
		whites = write(f, text_content, _strlen(text_content));
		if (whites == -1)
		{
			close(f);
			return (-1);
		}
		close(f);
		return (1);
	}
	else
	{
		close(f);
		return (1);
	}
}
