#include "main.h"

/**
* _atoi - convert string to int
* @s: string input
* Return: int
*/
int _atoi(char *s)
{
	int sign, factor;
	int foundNum, i, j, k, numStart, numEnd, numDigits, num;

	sign = factor = 1;
	num = numDigits	= foundNum = i = 0;
	do {
		if (s[i] == '\0')
			break;
		if (s[i] == '-')
			sign = sign * -1;
		while (s[i] >= 48 && s[i] <= 57)
		{
			if (!foundNum)
			{
				foundNum = 1;
				numStart = i;
			}
			numDigits++;
			i++;
		}
		numEnd = i;
		if (!foundNum)
			i++;
		else
			break;

	} while (1);

	for (j = numStart; j < numEnd; j++)
	{
		factor = 1;
		for (k = 0; k < numDigits - 1; k++)
			factor = factor * 10;
		numDigits--;
		num = (sign > 0) ?  num + (factor * (s[j] - '0')) : num - (factor * (s[j] - '0'));
	}

	return (num);
}
