#include <stdio.h>

/**
 * main - prints all argumetns
 * @argc: argument count
 * @argv: arguments pointer array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
