#include "main.h"

/**
 * array_iterator is the function that executes function given as parameter
 * @array: is an array
 * @size: is the size of the array
 * @action is the pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
