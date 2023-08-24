#include "main.h"
#include <stdio.h>
/**
* _strcat - src string to the dest string
* @dest: char
* @src: char
* Return: char
*/
char *_strcat(char *dest, char *src)
{
	int sizesrc = 0;
	int sizedst = 0;

	while (dest[sizedst] != '\0')
		sizedst++;

	while (src[sizesrc] != '\0')
	{
		dest[sizedst] = src[sizesrc];
		sizesrc++;
		sizedst++;
	}

	dest[sizedst + 1] = '\0';

	return (dest);
}
