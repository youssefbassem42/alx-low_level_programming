#include <stdio.h>

void before_main () __attribute__ ((constructor));
/**
 * first - prints a sentence before the main
 * function is executed 
 */

void before_main ()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
