#include "main.h"
#define _GNU_SOURCE
#include <string.h>
#include <elf.h>
#include <dlfcn.h>

/**
 * main - Entry Point
 * @argc: args count
 * @argv: args values
 *
 * Return: {int} program exit status codes
 */
int main(int argc, char *argv[])
{
	const char *f;
	int fo, c;
	Elf64_Ehdr elf_header;
	ssize_t bytes;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	f = argv[1];
	fo = open(f, O_RDONLY);
	if (fo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open file '%s'\n", f);
		return (98);
	}

	bytes = read(fo, &elf_header, sizeof(Elf64_Ehdr));
	if (bytes != sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Cannot read ELF header from file '%s'\n", f);
		return (98);
	}

	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		dprintf(STDERR_FILENO, "Error: File '%s' is not an ELF file\n", f);
		return (98);
	}

	printf("Magic: ");
	for (c = 0; c < SELFMAG; c++)
		printf("%02x ", elf_header.e_ident[c]);

	printf("\n");
	printf("Class: %s\n", (elf_header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("Data: %s\n", (elf_header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long) elf_header.e_entry);

	close(fo);

	return (0);
}
