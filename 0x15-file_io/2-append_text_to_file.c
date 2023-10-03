#include "main.h"
#include <stddef.h>

/**
 * _strlen - fn to get length of a string
 * @str: the string
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
 * append_text_to_file - fn name
 * @filename: filename
 * @text_content: file contents to append
 *
 * Return: {int} 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, whites;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
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
