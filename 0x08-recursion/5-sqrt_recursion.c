#include "main.h"

int _sqrt_helper(int n, int root);

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: int
 *
 * Return: if found returns root of the number, -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_recursion_helper - Helper function to find the natural square root.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root, or -1 if no natural square root exists.
 */
int _sqrt_helper(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (_sqrt_helper(n, root + 1));
}
