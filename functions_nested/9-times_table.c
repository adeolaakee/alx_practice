#include "main.h"

/**
 * times_table - this functions prints multiplication letter
 * 
 * Return: (0);
 *
 */

void times_table(void)
{
	int n = 0;

	int k = 0;

	while (n  < 10)
	{
		while (k < 10)
		{	
			_putchar(n * k + '0');
			_putchar(',');
			_putchar(' ');
			k++;
		}
	_putchar('\n');
	n++;
	}

}
