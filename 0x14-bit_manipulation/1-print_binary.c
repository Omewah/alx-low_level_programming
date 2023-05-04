#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The binary representation of a number to be printed.
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	for (int a = sizeof(n) * 8 - 1; a >= 0; --a)
	{
		_putchar((n >> a) & 1 ? '1' : '0');
	}
}
