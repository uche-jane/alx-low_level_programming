#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

#define ELF_MAGIC_SIZE 4
#define ELF_HEADER_SIZE 64

void display_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

void display_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		display_error("Failed to open the file");
	}

	// Read the ELF header
	char elf_header[ELF_HEADER_SIZE];
	ssize_t bytes_read = read(fd, elf_header, ELF_HEADER_SIZE);
	if (bytes_read == -1)
	{
		close(fd);
		display_error("Failed to read the ELF header");
	}

	// Check if it's a valid ELF file
	if (memcmp(elf_header, "\x7F" "ELF", ELF_MAGIC_SIZE) != 0)
	{
		close(fd);
		display_error("Not an ELF file");
	}

	// Display the information
	printf("Magic: ");
	for (int i = 0; i < ELF_MAGIC_SIZE; i++)
	{
		printf("%02x ", (uint8_t)elf_header[i]);
	}
	printf("\n");

	printf("Class: %s\n", elf_header[4] == 1 ? "ELF32" : "ELF64");

	printf("Data: %s\n", elf_header[5] == 1 ? "little endian" : "big endian");

	printf("Version: %d\n", (int)elf_header[6]);

	printf("OS/ABI: %d\n", (int)elf_header[7]);

	printf("ABI Version: %d\n", (int)elf_header[8]);

	printf("Type: %d\n", (int)*(uint16_t *)(elf_header + 16));

	printf("Entry point address: 0x%lx\n", *(unsigned long *)(elf_header + 24));

	close(fd);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		display_error("Usage: elf_header elf_filename");
	}

	display_elf_header(argv[1]);

	return(0);
}

