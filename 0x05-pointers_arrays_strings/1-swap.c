#include "main.h"

/**
* swap_int - swaps 2 numbers
* @a: num 1
* @b: num 2
* Return: void
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a  = *b;
	*b = c;
}
