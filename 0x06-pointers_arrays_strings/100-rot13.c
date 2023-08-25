#include "main.h"

/**
 * rot13 - rot13 enc
 * @c: string
 * Return: char
 */
char *rot13(char *c)
{
	int i, p;
	char l;
	int sl, cl;

	for (i = 0; c[i] != '\0'; i++)
	{
		l = c[i];
		sl = (l >= 'a' && l <= 'z') ? 1 : 0;
		cl = (l >= 'A' && l <= 'Z') ? 1 : 0;

		if (sl || cl)
		{
			if (sl)
			{
				p = l - 'a';
				p = (p + 13) % 26;
				l = p + 'a';
			}
			else
			{
				p = l - 'A';
				p = (p + 13) % 26;
				l = p + 'A';
			}
			c[i] = l;
		}
	}
	return (c);
}
