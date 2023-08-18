#include "main.h"

/**
 * print_number - print a number
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int num, d = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	while (num / d >= 10)
	{
		d *= 10;
	}

	while (d >= 1)
	{
		_putchar((num / d) % 10 + '0');
		d /= 10;
	}
}
