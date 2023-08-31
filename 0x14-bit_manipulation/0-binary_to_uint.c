#include "main.h"

/**
* binary_to_uint - convert  binary number to unsigned intger
* @b: string contain binary number
*
* Return: converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' || *b != '1')
			return (0);
		number = 2 * number + (*b++ - '0');
	}

	return (number);
}
