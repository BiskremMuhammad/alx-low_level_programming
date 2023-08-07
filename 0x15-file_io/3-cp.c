#include "main.h"
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * main - Entry Point
 * @argc: args count
 * @argv: args values
 *
 * Return: {int} status exit code
 */
int main(int argc, char *argv[])
{
	int fs, fd;
	const char *from, *to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	from = argv[1];
	to = argv[2];

	fs = open(from, O_RDONLY);
	if (fs == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		return (98);
	}

	fd = open(to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		return (99);
	}

	while ((bytes = read(from, buffer, sizeof(buffer))) > 0)
	{
		ssize_t w;

		w = write(fd, buffer, bytes);
		if (w != bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			return (99);
		}
	}

	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		return (98);
	}

	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		return (100);
	}

	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		return (100);
	}

	return (0);
}
