#include "main.h"
/**
 * _isupper - check if upper or not
 * @c: charcacter to check
 *Return: 1 if upper , 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
