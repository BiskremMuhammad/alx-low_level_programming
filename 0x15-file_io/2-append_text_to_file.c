#include "main.h"
#include <string.h>

/**
 * append_text_to_file - fn name
 * @filename: filename
 * @text_content: contents to add
 *
 * Return: {int}
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t l, w;

		l = strlen(text_content);
		w = write(f, text_content, l);

		if (w != l)
		{
			close(f);
			return (-1);
		}
	}

	close(f);
	return (1);
}
