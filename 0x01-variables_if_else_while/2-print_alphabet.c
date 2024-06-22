#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'z')
			putchar(ch);
		else
			putchar(ch"\n")
	}

	return (0);
}

