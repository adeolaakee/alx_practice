#include "main.h"

void print_rev(char *s)
{
	int i;
	int j;
	int len;


	for (i = 0; s[i] != '\0'; i++)
	
	len = i;

	for (j = len; j >= 0; j--)
	{	
			_putchar(s[j]);
	}
		_putchar('\n');
	
}	
