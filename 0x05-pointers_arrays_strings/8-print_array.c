#include "main.h"
#include <stdio.h>
/**
 * print_array - prints string
 * @a: arr of int
 * @n: arr num
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%i", a[i]);

		if (i != n - 1)
			printf(", ");
	}
}
