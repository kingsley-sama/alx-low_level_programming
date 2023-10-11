#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the times table
 * Return: void
 */

void print_times_table(int n)
{
	if (n >= 0 && n < 15)
	{


		int i, j, a, b, c, d;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				a = i * j;
				b = (a / 10) % 10;
				d = a / 100;
				c = a % 10;
				if (d > 0 && b > 0 && j != (n - 1))
				{
					_putchar(d + 48);
					_putchar(b + 48);
					_putchar(c + 48);
					_putchar(',');
					_putchar(' ');
				}
				else if (d == 0 && b > 0 && j != (n - 1))
				{
					if (j == 0)
						;
					else
						_putchar(' ');
					_putchar(c + 48);
					_putchar(',');
					_putchar(' ');
				}
				else if (b <= 0 && j == (n - 1))
				{
					_putchar(' ');
					_putchar(c + 48);
				}
				else if (b > 0 && j == (n - 1))
				{
					_putchar(b + 48);
					_putchar(c + 48);
				}
			}
			_putchar('\n');
		}
	}
}
