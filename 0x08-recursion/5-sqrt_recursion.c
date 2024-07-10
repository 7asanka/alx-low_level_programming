#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: int
 *
 * @Return: natural root of a number if found, -1 if not found
 */
int _sqrt_recursion(int n)
{
	int i;

	if (i < 0)
		return (-1);

	for (i = 0; i < (n / 2) + 1; i++)
	{
		if (i * i == n)
			return (i);
	}

	return (-1);
}
