#include "main.h"

/**
 * _isalpha - checks weather a char is a letter or not returns 1 if true
 * @c: character to be checked
 *
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	if ((c > 97 && c < 122) || (c > 65 && c < 91))
		return (1);
	else
		return (0);
}
