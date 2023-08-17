#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 9
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{

		if (j != 10){
			for (i = 0; i <= 14; i++)
			{	
				int v = 0;
			
				if (i >= 10)
				{
					_putchar('1');
					v = 10;
				}
				_putchar(i + '0' - v);
			}
		}
		_putchar('\n');
	}
}
