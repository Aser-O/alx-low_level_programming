#include "main.h"

/**
* reverse_array - reverses an array
* @a: array
* @n: num of elems
* Return: voif
*/
void reverse_array(int *a, int n)
{
	int i, tmp;

	n--;
	for (i = 0; i <= n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}
