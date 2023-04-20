#include "main.h"

/**
 * int_index function that searches for integer
 * @array: is the array
 * @size: the size of the array
 * @cmp: the pointer to the function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
