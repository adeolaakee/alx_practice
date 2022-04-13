#include <stdio.h>

/**
 * main - entry point of the program
 * the program prints possible combo of 
 * two digits
 *
 * Return: (0)
 *
 */

int main(void)
{
	int i;
	
	for (i = 0; i < 100; i++)
	{
		if (i % 10 != 0)
		{
			if (i / 10)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
			}
			else 
			{	putchar(i % 1 +'0');
				putchar(i + '0');
			}
			if (i != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
