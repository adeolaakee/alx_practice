#include <stdio.h>

/** main - this is the start of the program
 *
 * this program prints lower case letter
 * and skip some letters
 * 
 *  Return: (0)
 */

int main(void)
{
	char alpha;
	
	for (alpha = 'a'; alpha <= 'z'; alpha++);
	{
		putchar(alpha);
	}
	return (0);
}  
