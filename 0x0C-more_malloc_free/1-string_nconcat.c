#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to include from s2
 *
 * Return: pointer to the new string location
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	new_str = malloc(sizeof(char) * (len1 + n) + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		new_str[i] = s1[i];
	for (i = 0; i < n; i++)
			new_str[i + len1] = s2[i];
	new_str[len1 + len2 + 1] = '\0';

	return (new_str);
}
