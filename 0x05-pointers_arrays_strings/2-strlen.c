#include "main.h"

/**
 * _strlen - length of string inputted
 * @s: arr of char
 * Return: an int of chars
 */
int _strlen(char *s)
{
	int i = 0;

	do {
		if (s[i] != '\0')
			i++;
		else
			return (i);
	} while (1);
}
