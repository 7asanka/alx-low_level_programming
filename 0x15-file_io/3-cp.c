#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

/**
 * print_error - formats and prints error messages
 * @message: string to print
 * @filename: name of the file
 * @exit_code: error code
 *
 * Return: the exit code
 */
void print_error(const char *message, const char *filename, int exit_code)
{
	char error_message[256];

	snprintf(error_message, sizeof(error_message), "%s %s\n", message, filename);
	write(STDERR_FILENO, error_message, strlen(error_message));

	exit(exit_code);
}

/**
 * main - copies text from one file to another
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	int rdfd, wrfd;
	ssize_t rd, wr;
	char buffer[1024];

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		return (97);
	}
	rdfd = open(argv[1], O_RDONLY);
	if (rdfd == -1)
		print_error("Error: Can't read from", argv[1], 98);
	wrfd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (wrfd == -1)
	{
		close(rdfd);
		print_error("Error: Can't write to", argv[2], 99);
	}
	while ((rd = read(rdfd, buffer, 1024)) > 0)
	{
		wr = write(wrfd, buffer, rd);
		if (wr == -1)
		{
			close(rdfd);
			close(wrfd);
			print_error("Error: Can't write to", argv[2], 99);
		}
	}
	if (rd == -1)
	{
		close(rdfd);
		close(wrfd);
		print_error("Error: Can't read from", argv[1], 98);
	}
	if (close(rdfd) == -1)
		print_error("Error: Can't close fd", argv[1], 100);
	if (close(wrfd) == -1)
		print_error("Error: Can't close fd", argv[2], 100);
	return (0);
}
