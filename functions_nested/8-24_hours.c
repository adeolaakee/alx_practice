#include "main.h"

/**
 * jack_bauer - prints every minutes of the day of jack baeur
 *
 * Return: (0)
 */

void jack_bauer(void)
{
	int minutes;
	int seconds;

	for (minutes = 0; minutes <= 23; minutes++)
	{
		for (seconds = 0; seconds <= 59; seconds++)
		{
			if (minutes / 10)
			{
				_putchar(minutes / 10 + '0');
				_putchar(minutes % 10 + '0');
				_putchar(':');
			}
			else
			{
				_putchar(minutes % 1 + '0');
				_putchar(minutes / 1 + '0');
				_putchar(':');
			}
			if (seconds / 10)
                        {
                                _putchar(seconds / 10 + '0');
                                _putchar(seconds % 10 + '0');
                        }
                        else
                        {
                                _putchar(seconds % 1 + '0');
                                _putchar(seconds / 1 + '0');
                        }

			_putchar('\n');
		
		}


	}
}	
