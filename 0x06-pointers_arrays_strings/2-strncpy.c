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
	int sizedst = 0;
	int i = 0;

	while (dest[sizedst] != '\0')
		sizedst++;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (n > i)
		dest[i++] = '\0';

	return (dest);
}
