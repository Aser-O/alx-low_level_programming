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
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;


	if (lastDigit == 0)
	{
		char a[] = "is 0";

		printf("Last digit of %i is %i and %s\n", n, lastDigit, a);
	}
	else if (lastDigit < 6)
	{
		char a[] = "is less than 6 and not 0\n";

		printf("Last digit of %i is %i and %s", n, lastDigit, a);
	}
	else
	{
		char a[] = "is greater than 5";

		printf("Last digit of %i is %i and %s\n", n, lastDigit, a);
	}


	return (0);
}
