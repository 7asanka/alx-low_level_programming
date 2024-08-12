#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * print_error - formats and prints error messages
 * @message: string to print
 * @filename: name of the file
 * @exit_code: error code
 *
 * Return: the exit code
 */
int print_error(const char *message, const char *filename, int exit_code)
{
	printf("%s %s\n", message, filename);
	return (exit_code);
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
	char *buffer = malloc(1024);

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		return (97);
	}
	rdfd = open(argv[1], O_RDONLY);
	if (rdfd == -1)
		print_error("Error: Can't read from %s\n", argv[1], 98);

	wrfd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (wrfd == -1)
		print_error("Error: Can't write to %s\n", argv[2], 99);

	while ((rd = read(rdfd, buffer, 1024) > 0))
	{
		wr = write(wrfd, buffer, 1024);
		if (wr == -1)
			print_error("Error: Can't write to %s\n", argv[2], 99);
	}
	if (rd == -1)
		print_error("Error: Can't read from %s\n", argv[1], 98);
	if (close(rdfd) == -1)
		print_error("Error: Can't close fd %s\n", argv[1], 100);
	if (close(wrfd) == -1)
		print_error("Error: Can't close fd %s\n", argv[2], 100);

	return (0);
}