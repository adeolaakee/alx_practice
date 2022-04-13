#include <stdio.h>

/**
 * main - the entry point of the program
 * the program prints base 10 num using putchar function
 * 
 * Return: (0)
 */

int main(void)
{
	int baset;

	for (baset = 0; baset < 20; baset++)
	{
		if (baset / 10) 
		{
		putchar(baset / 10 + '0');
		putchar(baset % 10 + '0');
		}
		else
		{
		putchar(baset + '0');
		}
	}	
	putchar('\n');
	return (0);
}
