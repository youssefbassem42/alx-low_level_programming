#include "main.h"

int _islower(int c)
{
	char *ch = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for(i = 0; i <= 26; i++)
	{
		if (c == ch[i])
		{
			return(1);
		}
	}
	return 0;
}
