#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char pc[] = "_putchar";
	int i;

	for (i = 0; pc[i] !='\0'; i++)
	{
		_putchar(pc[i]);
	}

	return (0);
}
