#include "main.h"

#define BUF_SIZE 1024

/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, or the corresponding exit code on failure
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, close_status;
    ssize_t read_bytes, write_bytes;
    char buffer[BUF_SIZE];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        return 97;
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        return 98;
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(fd_from);
        return 99;
    }

    do
    {
        read_bytes = read(fd_from, buffer, BUF_SIZE);
        if (read_bytes == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
            close(fd_from);
            close(fd_to);
            return 98;
        }

        write_bytes = write(fd_to, buffer, read_bytes);
        if (write_bytes == -1 || write_bytes != read_bytes)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(fd_from);
            close(fd_to);
            return 99;
        }

    } while (read_bytes == BUF_SIZE);

    close_status = close(fd_from);
    if (close_status == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        return 100;
    }

    close_status = close(fd_to);
    if (close_status == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        return 100;
    }

    return 0;
}

