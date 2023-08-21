#include "main.h"

/**
 * print_rev -  prints string reversed
 * @s: arr of char
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	do {
		if (s[i] != '\0')
			i++;
		else
			break;
	} while (1);

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
