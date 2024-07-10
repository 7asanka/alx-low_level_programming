#include "main.h"

_sqrt_helper(int n, int root);

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

_sqrt_helper(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (_sqrt_helper(n, root + 1));
}
