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
	int i = 0;
	char a[] = "0123456789";

	for (i = 0; i < 10; i++)
		putchar(a[i]);
	putchar('\n');
	return (0);
}
