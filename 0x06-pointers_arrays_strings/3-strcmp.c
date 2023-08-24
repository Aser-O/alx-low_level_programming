#include "main.h"

/**
* _strcmp - compares 2 strings
* @s1: string 1
* @s2: string 2
* Return: diff btwn both chars
*/
int _strcmp(char *s1, char *s2)
{
	int i = -1;
	int diff;

	while (1)
	{
		i++;
		diff = s1[i] - s2[i];
		if (diff == 0 && s1[i] != '\0' && s2[0] != '\0')
			continue;
		return (diff);
	}
}
