#include "main.h"

int _isalpha(int c)
{
	char *capital = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *small = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for(i = 0; i <= 52; i++)
	{
		if(c == small[i] || c == capital[i])
			return 1;
	}
	return 0;
}
