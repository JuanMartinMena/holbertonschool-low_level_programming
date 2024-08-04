#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#define BUFFER_SIZE 1024
/**
 * error_exit - Imprime un mensaje de error y sale del programa
 * @exit_code: El código de salida
 * @message: El mensaje de error con formato
 * @arg: El argumento a incluir en el mensaje de error
 */
void error_exit(int exit_code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(exit_code);
}
/**
 * open_files - Abre los archivos de origen y destino
 * @file_from: Nombre del archivo de origen
 * @file_to: Nombre del archivo de destino
 * @fd_from: Descriptor de archivo de origen (salida por referencia)
 * @fd_to: Descriptor de archivo de destino (salida por referencia)
 *
 * Return: 0 en éxito, o -1 en error
 */
int open_files(const char *file_from, const char *file_to, int *fd_from, int *fd_to)
{
	*fd_from = open(file_from, O_RDONLY);
	if (*fd_from == -1)
		return -1;
	*fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		close(*fd_from);
		return -1;
	}
	return 0;
}
/**
 * copy_file - Copia el contenido del archivo de origen al archivo de destino
 * @fd_from: Descriptor del archivo de origen
 * @fd_to: Descriptor del archivo de destino
 *
 * Return: 0 en éxito, o -1 en error
 */
int copy_file(int fd_from, int fd_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			return (-1);
	}
	if (bytes_read == -1)
		return -1;
	return (0);
}
/**
 * close_file - Cierra un descriptor de archivo y maneja errores
 * @fd: Descriptor del archivo a cerrar
 *
 * Return: 0 en éxito, o -1 en error
 */
int close_file(int fd)
{
	if (close(fd) == -1)
		return (-1);
	return (0);
}
/**
 * main - Copia el contenido de un archivo a otro
 * @argc: Número de argumentos
 * @argv: Los argumentos
 *
 * Return: 0 en éxito, o código de err
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char fd_str[10];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", NULL);
	if (open_files(argv[1], argv[2], &fd_from, &fd_to) != 0)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	if (copy_file(fd_from, fd_to) != 0)
	{
		close_file(fd_from);
		close_file(fd_to);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (close_file(fd_from) != 0)
	{
		snprintf(fd_str, sizeof(fd_str), "%d", fd_from);
		error_exit(100, "Error: Can't close fd %s\n", fd_str);
	}
	if (close_file(fd_to) != 0)
	{
		snprintf(fd_str, sizeof(fd_str), "%d", fd_to);
		error_exit(100, "Error: Can't close fd %s\n", fd_str);
	}
	return (0);
}
