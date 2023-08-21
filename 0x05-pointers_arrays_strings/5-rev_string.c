#include "main.h"

/**
 * rev_string -  prints string reversed
 * @s: arr of char
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, size = 0;
	char t;

	do {
		if (s[size] != '\0')
			size++;
		else
			break;
	} while (1);

	j = size - 1;
	for (i = 0; i < size / 2; i++)
	{
		t = s[i];
		s[i] = s[j];
		s[j--] = t;
	}
}
