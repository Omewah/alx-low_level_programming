#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{

	size_t i, j, k;

	if (array == NULL)
		return (-1);

	for (j = 0, k = size - 1; k >= j;)
	{
		printf("Searching in array: ");
		for (i = j; i < k; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = j + (k - j) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			k = i - 1;
		else
			j = i + 1;
	}

	return (-1);
}
