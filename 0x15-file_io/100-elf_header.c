#include "main.h"
#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_elf_info - Display ELF header information
 * @header: ELF header structure
 */
void print_elf_info(Elf64_Ehdr *header)
{
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; ++i)
        printf("%02x ", header->e_ident[i]);
    printf("\n");

    printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Other");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", (header->e_type == ET_EXEC) ? "EXEC (Executable file)" : "Other");
    printf("  Entry point address:               %#lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Display information from ELF header of a given ELF file
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, or 98 on failure
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("Error");
        return 98;
    }

    Elf64_Ehdr elf_header;
    ssize_t read_bytes = read(fd, &elf_header, sizeof(Elf64_Ehdr));
    if (read_bytes == -1)
    {
        perror("Error");
        close(fd);
        return 98;
    }

    if (read_bytes != sizeof(Elf64_Ehdr) ||
        elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
        elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
        elf_header.e_ident[EI_MAG3] != ELFMAG3)
    {
        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
        close(fd);
        return 98;
    }

    print_elf_info(&elf_header);

    close(fd);
    return 0;
}

