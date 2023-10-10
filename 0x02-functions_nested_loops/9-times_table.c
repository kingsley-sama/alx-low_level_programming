#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the times table
 * Return: void
 */

void times_table(void)
{

	int i, j;
	int a, b;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 11; j++)
		{
			a = i * j;
			b = a / 10;
			int c  = a % 10;

			_putchar(b + 48);
			_putchar(b + 48);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
