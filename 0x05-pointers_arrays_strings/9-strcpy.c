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
	char *dest_pointer = dest;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = src[len];

	return (dest_pointer);
}
