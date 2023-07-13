#include<unistd.h>

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
	char qout[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qout, 59);
	return (1);
}
