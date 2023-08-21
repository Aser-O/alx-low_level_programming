#include "main.h"

/**
 * _puts - prints string
 * @s: arr of char
 * Return: void
 */
void _puts(char *s)
{
	int i = 0;

	do {
		if (s[i] != '\0')
			_putchar(s[i]);
		else
		{
			_putchar('\n');
			return;
		 }
		i++;
	} while (1);
}
