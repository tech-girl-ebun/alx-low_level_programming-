#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 * return; 0
 */

void more_numbers(void)
{
	char c, i;
	int a = 0;

	while (a < 10)
	{
		for (c = 0; c < 15; c++)
		{
			c = i;
			if (c > 9)
			{
				_putchar('1');
				c = i % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
		a++;
	}
}
