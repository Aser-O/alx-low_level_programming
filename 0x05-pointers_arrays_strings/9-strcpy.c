#include "main.h"

/**
 * _strcpy - copies string from a to b
 * @dest: destination of copying
 * @s: source of copying
 * Return: char pointer
 */
char *_strcpy(char *dest, char *s)
{
	int i = 0;

	do {
		if (s[i] != '\0')
		{
			dest[i] = s[i];
			i++;
		}
		else
		{
			break;
		}
	} while (1);

	return (dest);
}
