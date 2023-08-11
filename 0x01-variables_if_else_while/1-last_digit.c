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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;


	if (lastDigit == 0)
	{
		char a[] = "is 0";

		printf("Last digit of %i is %i and %s", n, lastDigit, a);
	}
	else if (lastDigit > 6)
	{
		char a[] = "less than 6 and is not 0";

		printf("Last digit of %i is %i and %s", n, lastDigit, a);
	}
	else
	{
		char a[] = "greater than 5";

		printf("Last digit of %i is %i and %s", n, lastDigit, a);
	}


	return (0);
}
