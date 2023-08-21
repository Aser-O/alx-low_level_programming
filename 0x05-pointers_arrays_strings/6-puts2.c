#include "main.h"

/**
 * puts2 -  prints string %2
 * @s: arr of char
 * Return: void
 */
void puts2(char *s)
{
	int i = 0;
	int j = 0;

	do {
		if (s[i] != '\0')
			i++;
		else
			break;
	} while (1);

	for (; j < i - 1; j++)
	{
		if (j % 2 == 0)
			_putchar(s[j]);
	}
	_putchar('\n');
}
