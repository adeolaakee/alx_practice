#include <stdio.h>

/**
 * main - entry point of the program
 * this program prints all number of base 16
 *
 * Return: (0);
 */
int main(void)
{
	char ch;
	int i;
	
	for (i = 0; i < 7; i++)
	{
		putchar(i + '0');
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
