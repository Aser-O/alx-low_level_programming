#include "main.h"

/**
* leet - leetspeak
* @c: string
* Return: same string
*/
char *leet(char *c)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[j] == c[i])
				c[i] = n[j];
		}
	}
	return (c);
}
