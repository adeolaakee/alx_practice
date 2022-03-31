#include "main.h"

/**
 * _islower(int c) - this function checks for lowercase 
 *
 * Return: 1 if true and 0 if otherwise
 */

int _islower(int c)
{
	
	if (c >= 'a' && c <='z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
