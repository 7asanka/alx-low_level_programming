#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);

	return (0);
}
