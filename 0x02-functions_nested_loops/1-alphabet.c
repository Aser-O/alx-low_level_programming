#include "main.h"

/**
 * print_alphabet - prints alphabet
 */

void print_alphabet(void)
{
	int i;

	for (i = (int)'a'; i < (int)'z' + 1; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}


