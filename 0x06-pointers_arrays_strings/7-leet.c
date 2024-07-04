#include "main.h"

/**
 * leet - encode a string into 1337
 * @str: pointer to a string
 *
 * Return: pointer to string
 */
char *leet(char *str)
{
	char leet_arr[10][2] = {{'a', '4'}, {'e', '3'}, {'o', '0'}, {'t', '7'},
		{'l', '1'}, {'A', '4'}, {'E', '3'}, {'O', '0'}, {'T', '7'}, {'L', '1'}};
	char *pstr = str;
	int i;

	while (*str != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*str == leet_arr[i][0])
			{
				*str = leet_arr[i][1];
			}
		}
		str++;
	}

	return (pstr);
}
