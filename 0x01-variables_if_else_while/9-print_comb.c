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

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		if(i != 9)
	       	{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
