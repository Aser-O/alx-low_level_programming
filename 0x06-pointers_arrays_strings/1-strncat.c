#include "main.h"
#include <stdio.h>
/**
* _strncat - src string to the dest string
* @dest: char
* @src: char
* @n: number of bytes
* Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
	int sizesrc = 0;
	int sizedst = 0;

	while (dest[sizedst] != '\0')
		sizedst++;

	while (src[sizesrc] != '\0' && sizesrc != n)
	{
		dest[sizedst] = src[sizesrc];
		sizesrc++;
		sizedst++;
	}

	dest[sizedst + 1] = '\0';

	return (dest);
}
