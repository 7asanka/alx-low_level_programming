#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int started = 0;
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);

	while (mask)
	{
		if (n & mask)
		{
			putchar('1');
			started = 1;
		} else if (started)
			putchar('0');
		mask >>= 1;
	}

	if (!started)
		putchar('0');
}
