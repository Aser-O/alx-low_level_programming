#include "main.h"

/**
 * puts_half -  prints string /2
 * @s: arr of char
 * Return: void
 */
void puts_half(char *s)
{
	int i = 0;
	int j = 0;

	do {
		if (s[i] != '\0')
			i++;
		else
			break;
	} while (1);

	if (i % 2 != 0)
		j = (i - 1) / 2;
	else
		j = i  / 2;

	for (; j < i; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
