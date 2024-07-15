#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, or NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1 = 0, len2 = 0;
	char *new_string;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	new_string = (char *)malloc(sizeof(char) * (len1 + len2) + 1);
	if (new_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		new_string[i] = s1[i];
	}
	for (i = 0; i < len1 + len2; i++)
	{
		new_string[i + len1] = s2[i];
	}
	new_string[len1 + len2] = '\0';

	return (new_string);
}
