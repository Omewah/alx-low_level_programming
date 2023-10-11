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
	size_t j;

	if (array == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
