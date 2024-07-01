#include "main.h"

/**
 * _strcpy - copies string from one pointed t oby a pointer to another array
 * pointed to by pointer
 * @src: source to copy string from
 * @dest: destination to copy to
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
		len++;
	for (i = 0; i <= len + 1; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
