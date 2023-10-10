#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the times table
 * Return: void
 */

void times_table(void)
{

	int i, j;
	int a, b, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * j;
			b = a / 10;
			c = a % 10;
			_putchar(b + 48);
			_putchar(c + 48);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
