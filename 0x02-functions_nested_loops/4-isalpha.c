#include "main.h"

/**
 * _isalpha - checks upper or lower
 * @a: the value being checked
 *
 * Return: 1 for success 0 for error
 */
int _isalpha(int a)
{
	return ((a >= 97 && a <= 122) || (a >= 65 && a <= 90) ? 1 : 0);
}


