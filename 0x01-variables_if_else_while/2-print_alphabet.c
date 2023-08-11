#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (i = 0; i < 26; i++)
		putchar(a[i]);

	puts("\n");
	return (0);
}
