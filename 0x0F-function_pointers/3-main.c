#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 on success, error and approriate exit status
 */
int main(int argc, char *argv[])
{
	int (*op_f)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	op_f = get_op_func(argv[2]);
	if (op_f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", op_f(a, b));

	return (0);
}
