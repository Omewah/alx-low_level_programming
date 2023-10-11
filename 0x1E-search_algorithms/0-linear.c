#include "search_algos.h"

/**
 * linear_search - to search for a value in an array of integers
 * @array: a pointer to the first element of the array
 * @size: he number of elements in array
 * @value: the value to search for
 * Return: -1 value if not found or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; ++i)
		{
			VALUE_CHECKED(array, i);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
