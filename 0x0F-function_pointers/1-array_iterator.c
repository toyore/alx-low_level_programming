#include <stddef.h>

/**
 * array_iterator - Apply a function to each element of an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to apply to each element
 *
 * Description: This function iterates over the elements of the array
 * and applies the specified function to each element.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

