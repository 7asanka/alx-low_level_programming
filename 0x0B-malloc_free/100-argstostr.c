#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: pointer array to arguments
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int len = 0;
	char *new_string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	new_string = malloc(sizeof(char) * len + 1);
	if (new_string == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_string[k] = av[i][j];
			k++;
		}
		new_string[k] = '\n';
		k++;
	}
	new_string[k] = '\0';

	return (new_string);
}
