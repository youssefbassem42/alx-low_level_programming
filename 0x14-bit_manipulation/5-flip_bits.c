#include "main.h"

/**
* flip_bits - count number of bits to change
* to from one number to another
* @n: first number
* @m: second number
*
* Return: number of bits changed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int c;
	unsigned long int exclusive_or = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = exclusive_or >> i;
		if (c & 1)
			counter++;
	}

	return (counter);
}
