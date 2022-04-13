#include "main.h"

/**
 * int print_sign - this functions prints the sign of a num
 * either positive, negative
 * Return: (n)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar (0 + '0');
		return(0);
	}
	else 
	{
		_putchar('-');
		return(-1);
	}
	return (0);
}
