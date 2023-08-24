#include "main.h"

/**
* cap_string - makes a string upper case
* @c: the word
* Return: void
*/
char *cap_string(char *c)
{
	int i = 0;

	do {
		if (c[i] == '\0')
			return (c);
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] += 'A' - 'a';
		i++;
	} while (1);
}
