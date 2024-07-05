#include "main.h"

/**
 * _strchr - locates a char in a string
 * @s: string to check
 * @c: character to locate
 *
 * Return: pointer to the location of the first occurrence of c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}

	return (s);
}
