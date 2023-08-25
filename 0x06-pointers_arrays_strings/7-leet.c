#include "main.h"

/**
* leet - leetspeak
* @c: string
* Return: same string
*/
char *leet(char *c)
{
	char a[] = "aeotlAEOTL";
	int n[] = {4, 3, 0, 7, 1};
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (a[j] == c[i])
				c[i] = n[j % 6] + '0';
		}
	}
	return (c);
}
