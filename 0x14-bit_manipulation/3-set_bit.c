#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: A pointer to the bit to set the value.
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	
        return (-1);
	
	unsigned long int val = 1UL << index;
	*n |= val;

	return (1);
}
