#include "main.h"

/**
* string_toupper - makes a string upper case
* @c: the word
* Return: void
*/
char *string_toupper(char *c)
{
	int i = 0;

	do
	{
		if (c[i] == '\0')
			return c;
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] += 'A' - 'a';
		i++;
	} while (1);
}
