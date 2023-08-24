#include "main.h"

/**
 * cap_string - makes a string upper case
 * @a: the word
 * Return: void
 */
char *cap_string(char *a)
{
	int i = 0;
	int sep = 0;

	do {
		if (a[i] == '\0')
			return (a);

		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' || a[i] == ',' ||
				a[i] == ';' || a[i] == '.' || a[i] == '!' ||
				a[i] == '?' || a[i] == '"' || a[i] == '(' ||
				a[i] == ')' || a[i] == '{' || a[i] == '}')
		{
			sep = 1;
			i++;
			continue;
		}

		if ((a[i] >= 'a' && a[i] <= 'z') && sep == 1)
		{
			a[i] += 'A' - 'a';
			sep = 0;
		}
		i++;
	} while (1);
}
