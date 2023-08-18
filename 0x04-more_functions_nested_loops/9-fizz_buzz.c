#include <stdio.h>

/**
* fb - fizzbuzz
* Return: void
*/
void fb()
{
	int i = 0;

	for (i = 0; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		       printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%i ", i);	
	}
}
