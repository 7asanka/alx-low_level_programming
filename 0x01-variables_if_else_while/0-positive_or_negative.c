#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);

	return (0);
}
