#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies a string in a new memory location
 * @str: string to be copied
 *
 * Return: pointer to the duplicated string, or NULL if no sufficient memory
 * is available
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *pstr = str;
	char *new_str;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		size++;
		str++;
	}
	str = pstr;
	new_str = (char *)malloc(sizeof(char) * size + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		new_str[i] = *str;
		str++;
	}

	return (new_str);
}
