#include "main.h"
#include <stdio.h>
/**
 * cap_aing - capitalize all words of a aing
 * @a: pointer to the aing
 *
 * Return: char pointer to the aing pointer
 */
char *cap_string(char *a)
{
	char *pa = a;

	while (*a != '\0')
	{
		if (*a == ' ' || *a == '\t' || *a == '\n' || *a == ',' || *a == ';' ||
			*a == '.' || *a == '!' || *a == '?' || *a == '"' || *a == '(' ||
			*a == ')' || *a == '{' || *a == '}')
		{
			a++;
				if (*a >= 'a' && *a <= 'z')
					*a = *a - ('a' - 'A');
		} else
			a++;
	}

	return (pa);
}
