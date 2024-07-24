#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: array
 * @size: size of the array
 * @action: function to excute on the array
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || !size || action == NULL)
		return;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
