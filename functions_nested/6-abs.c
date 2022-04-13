#include "main.h"

/**
 * int _abs(int) - the function prints absolute value of an integer
 *
 * Return: (int)
 */

int _abs(int n) 
{	

	if (n < 0)
	{
		n = n * (-1);
		return (n);

	}

	else if (n >= 0)
	{
		return (n);
	
	}
	_putchar('\n');

	return (0);
}
