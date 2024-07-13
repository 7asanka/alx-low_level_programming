#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change for an amount
 * @argc: argument count
 * @argv: arguments pionter array
 *
 * Return: 0 on success, 1 if there is an error.
 */
int main(int argc, char *argv[])
{
	int i, cents, coins = 0;
	int cvalue[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= cvalue[i])
		{
			cents -= cvalue[i];
			coins++;
		}
	}

	printf("%d\n", coins);
	return (0);

}
