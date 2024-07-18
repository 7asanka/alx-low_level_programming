#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting value, and is less than max
 * @max: ending value, and is grater than min
 *
 * Return: pointer to the created array
 */
int *array_range(int min, int max)
{
	int i, j = min;
	int arr_size;
	int *int_arr;

	if (min > max)
		return (NULL);

	arr_size = max - min + 1;

	int_arr = malloc(sizeof(int) * arr_size);
	if (int_arr == NULL)
		return (NULL);

	for (i = 0; j <= max; i++)
	{
		int_arr[i] = j;
		j++;
	}

	return (int_arr);
}
