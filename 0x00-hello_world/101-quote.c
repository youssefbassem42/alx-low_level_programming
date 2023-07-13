#include <unistd>

/**
 * main-Entry Point
 *
 * Description: printing without using standerd functions
 *	write(int fd,const void *buf,size_t count)
 *
 * Return: 1 (not success)
*/

int main(void)
{
	char qoute[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qoute, 59);
	return (1);
}
