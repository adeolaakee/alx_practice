#include <stdio.h>

/**
 * main - the starting point of the program
 * 
 * the program prints alphabt in lower case and skip 
 * alphabet e and q.
 *
 * Return: (0);
 */

int main(void)
{
	char alpha = 'a';
	
	for (; alpha <= 'z'; alpha++)
	{
		if ((alpha != 'e') &&(alpha != 'p'))
		{
			putchar (alpha);
		}
	}

	putchar('\n');
	return (0);
}
