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

	while ((src[sizesrc] != '\0' && sizesrc != n) && i != sizedst)
	{
		dest[i] = src[sizesrc];
		sizesrc++;
		i++;
	}

	dest[sizedst + 1] = '\0';

	return (dest);
}
