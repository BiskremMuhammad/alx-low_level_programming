#include "main.h"
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * create_file - fn name
 * @filename: filename
 * @text_content: contents to put on the file
 *
 * Return: {int}
 */
int create_file(const char *filename, char *text_content)
{
	int f;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
