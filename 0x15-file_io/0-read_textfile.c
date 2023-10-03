#include "main.h"
#include <stddef.h>

/**
 * read_textfile - fn name
 * @filename: filname
 * @letters:  letters
 *
 * Return: {size_t}
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, n, writes;
	char *ptr;

	ptr = malloc(sizeof(*ptr) * (letters + 1));
	if (filename == NULL || ptr == NULL)
	{
		free(ptr);
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	n = read(file, ptr, letters);
	if (n == -1)
		return (0);

	ptr[n] = '\0';
	writes = write(STDOUT_FILENO, ptr, n);
	if (writes != n)
		return (0);
    
	free(ptr);
	close(file);
	return (n);
}
