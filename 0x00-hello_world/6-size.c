#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char c;
	long int la;
	long long int lla;
	float f;

	printf("Size of a char: %li byte(s)\n", sizeof(c));
	printf("Size of a int: %li byte(s)\n", sizeof(a));
	printf("Size of a long int: %li byte(s)\n", sizeof(la));
	printf("Size of a long long int: %li byte(s)\n", sizeof(lla));
	printf("Size of a float: %li byte(s)\n", sizeof(f));
	return (0);
}

