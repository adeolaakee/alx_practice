#include "main.h"

/**
 * int _isalpha - this functions checks if alpha is uppercase
 *
 * Return: (1)
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
