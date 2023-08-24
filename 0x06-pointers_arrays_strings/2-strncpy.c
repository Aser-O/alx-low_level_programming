#include "main.h"
#include <stdio.h>
/**
* _strncpy - src string to the dest string
* @dest: char
* @src: char
* @n: number of bytes
* Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int sizesrc = 0;
	int sizedst = 0;
	int i = 0;

	while (dest[sizedst] != '\0')
		sizedst++;

	while (i <= n && src[sizesrc] != '\0')
	{
		dest[i] = src[sizesrc];
		sizesrc++;
		i++;
	}

	if (sizesrc > n)
		dest[i + sizedst] = '\0';
	else
		dest[i] = '\0';

	return (dest);
}
