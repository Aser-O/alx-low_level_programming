#include "main.h"

/**
 * cap_string - makes a string upper case
 * @a: the word
 * Return: void
 */
char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if ((i == 0) && (a[i] >= 'a' && a[i] <= 'z'))
		{
			a[i] =- ('a' - 'A');
			i++;
			continue;
		}
		
		if (a[i - 1] == ' ' || a[i - 1] == '\t' || a[i - 1] == '\n' || a[i - 1] == ',' ||
			a[i - 1] == ';' || a[i - 1] == '.' || a[i - 1] == '!' ||
			a[i - 1] == '?' || a[i - 1] == '"' || a[i - 1] == '(' ||
			a[i - 1] == ')' || a[i - 1] == '{' || a[i - 1] == '}')
		{
			if (a[i] >= 'a' && a[i] <= 'z')
				a[i] -= ('a' - 'A');
		}

		i++;
	}

	return (a);
}
