#include "main.h"

/**
 * string_toupper - turns all lowercase letters of a string to uppercase
 * @a: pointer to the string
 *
 * Return: pointer to the original pointer to the string
 */
char *string_toupper(char *a)
{
	int i;
	char *pa = a;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (*a >= 'a' && *a <= 'z')
		{
			*a -= ('a' - 'A');
		}
		a++;
	}

	return (pa);
}
