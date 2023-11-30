#include "function_pointers.h"

/**
 * int_index - calls a function that searches for an integer
 * @array: array of elements
 * @size: size of array
 * @cmp: compare function to call
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
