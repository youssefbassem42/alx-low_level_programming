#include "main.h"

/**
 * print_binary - print binary equivalent of the decimal number
 * @n: number to print in binary base
 */
void print_binary(unsigned long int n)
{
	int  counter = 0;
	unsigned long int c;

	for (int i = 63; i >= 0; i--)
	{
		c = n >> i;

		if (c & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (counter == NULL)
		_putchar('0');
}
