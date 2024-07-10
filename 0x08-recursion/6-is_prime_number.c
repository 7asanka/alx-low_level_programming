#include "main.h"

int prime_helper(int n, int i);
/**
 * is_prime_number - checks if number is prime
 * @n: integer
 *
 * Return: 1 if number is prime, 0 if nor
 */
int is_prime_number(int n)
{
	return (prime_helper(n, 0));
}

/**
 * prime_helper - helper function
 * @n: integer
 * @i: prime checker
 *
 * Return: 0 or 1 if integer is not or is prime respectively
 */
int prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_helper(n, i + 1));
}
