#include <stdio.h>

/**
 * main - fizzbuzz
 * Return: void
 */
int main(void)
{
	int i = 0;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);

		if (i != 100)
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
