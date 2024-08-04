#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#define BUFFER_SIZE 1024
/**
 * error_exit - Da un error especifico y sale
 * @exit_code: El numero de error
 * @message: El mensaje de error
 * @arg: El archivo que dio error o fd
 */
void error_exit(int exit_code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(exit_code);
}
/**
 * main - copia el contenido de un archivo a otro
 * @argc: numero de argumentos
 * @argv: Los argumentos
 *
 * Return: 0 on success, o sale ocn mensaje de error
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	char fd_str[10];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", NULL);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(fd_from) == -1)
	{
		snprintf(fd_str, sizeof(fd_str), "%d", fd_from);
		error_exit(100, "Error: Can't close fd %d\n", fd_str);
	}
	if (close(fd_to) == -1)
	{
		snprintf(fd_str, sizeof(fd_str), "%d", fd_to);
		error_exit(100, "Error: Can't close fd %d\n", fd_str);
	}
	return (0);
}
