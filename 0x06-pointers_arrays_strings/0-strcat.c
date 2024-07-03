#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: char* pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
		dest++;
	while ((*dest++ = *src++) != '\0')
	{

	}
	return (dest_start);
}
