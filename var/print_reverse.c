#include <stdio.h>

/**
 * main - this is the entry point of the program
 * this program prints alphabet in reverse
 *
 * Return: (0)
 *
 */

int main(void)
{
	char alpha ='z';
	
	for (; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
