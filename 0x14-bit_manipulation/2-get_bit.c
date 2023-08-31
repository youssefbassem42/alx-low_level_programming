#include "main.h"

/**
 * get_bit - return value of a bit at index in  decimal number
 * @n: number to search for
 * @index: index of bit
 *
 * Return: value of  bit entered
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (index > 63)
		return (-1);

	bitValue = (n >> index) & 1;

	return (bitValue);
}
