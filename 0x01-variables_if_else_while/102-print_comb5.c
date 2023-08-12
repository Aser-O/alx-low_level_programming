#include <stdio.h>

int main(void)
{
int a, b, c, d;

for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
		{
		for (c = 0; c <= 9; c++)
			{
			for (d = 0; d <= 9; d++)
				{
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c + a);
					putchar('0' + d + a + b);
					if (a != 9 || b != 8 || c != 9 || d != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
