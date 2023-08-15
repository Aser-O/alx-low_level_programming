#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 11; j++)
	{
		for (i = (int)'a'; i < (int)'z' + 1; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}


