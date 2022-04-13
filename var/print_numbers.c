#include <stdio.h>

/**
 * main - the entry point of the program
 *
 * the program prints all single digit of base 10
 * starting from 0
 *
 * Return: (0)
 */
int main(void)
{
	int digit = 0;

	for (digit = 0; digit < 10; digit++)
	{
		printf("%d", digit);
	}
	printf("\n");
	return (0);
}
