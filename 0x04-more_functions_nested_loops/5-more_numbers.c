#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 9
 */
void print_numbers(void)
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		for (i = 0; i <= 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
