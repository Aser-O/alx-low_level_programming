#include "main.h"

/**
 * cap_string - makes a string upper case
 * @a: the word
 * Return: void
 */
char *cap_string(char *a)
{
	int i = 0;
	int j = 1;

	while (a[j] != '\0')
	{
		i = j - 1;
		if ((a[i] == ' ' || a[i] == '\t' || a[i] == '\n' || a[i] == ',' ||
				a[i] == ';' || a[i] == '.' || a[i] == '!' ||
				a[i] == '?' || a[i] == '"' || a[i] == '(' ||
				a[i] == ')' || a[i] == '{' || a[i] == '}')
		&& (a[j] >= 'a' && a[j] <= 'z'))
			a[j] += 'A' - 'a';
		else if (a[j] >= 'A' && a[j] <= 'Z')
			a[j] -= 'A' - 'a';
		j++;
	};
	return (a);
}
