#include "main.h"
#include <unistd.h>

/**
 * _putchar - print character
 * @c: character
 *
 * Return: 1 if success, -1 if fails
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
