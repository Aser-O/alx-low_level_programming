#include "main.h"

/**
* reverse_array - reverses an array
* @a: array
* @n: num of elems
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i, tmp, end;

	end = n / 2;
	n--;
	for (i = 0; i < end; i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}
