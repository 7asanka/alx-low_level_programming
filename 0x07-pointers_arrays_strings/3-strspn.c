#include "main.h"

/**
 * _strspn - gets the length of the prefix substring
 * @s: string
 * @accept: substring
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, found;
	char *a;

	while (*s != '\0')
	{
		found = 0;
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
			break;
		len++;
		s++;
	}

	return (len);
}
