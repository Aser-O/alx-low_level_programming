#include "main.h"

/**
* print_line - printing _$
* @a: num of _
* Return: void
*/
void print_line(int a)
{
	int i;

	for (i = 0; i < a; i++)
	{
		_putchar('_');
	}
	_putchar('$');
	_putchar('\n');
}
