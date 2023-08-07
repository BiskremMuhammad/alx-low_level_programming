#include "main.h"
#include <string.h>

/**
 * read_textfile - fn to read a file
 * @filename: filename
 * @letters: number of letters to read
 *
 * Return: {ssize_t} total number of letters it can read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char buffer[1024];
	ssize_t totalLetters, letterByte;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	totalLetters = 0;
	while ((letterByte = read(f, buffer, sizeof(buffer))) > 0 && totalLetters < (ssize_t)letters)
	{
		 ssize_t p, w;

		 p = (letterByte > (ssize_t)(letters - totalLetters)) ? (ssize_t)(letters - totalLetters) : letterByte;
		 w = write(STDOUT_FILENO, buffer, p);

		 if (w < 0 || w != p)
		 {
		 	close(f);
			return (0);
		 }
		 totalLetters += p;
	}

	close(f);
	return (totalLetters);
}
