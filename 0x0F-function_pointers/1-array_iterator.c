#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - prints each array element on a very new line
 * @array: array and whatever it does
 * @size: how many elements you should print
 * @action: pointer to print in regular or hex
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
