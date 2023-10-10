#include "main.h"
#include <stdio.h>
/**
 * jack - prints every minute in a day
 * Return: void
 */

void jack_bauer(void)
{

	int i, j;
	int a, b, c, d;
	for (i = 0; i < 24; i++)
	{
		a = i / 10;
		b = i % 10;
		for (j = 0; j < 69; j++)
		{
			c = j / 10;
			d = j % 10;

			_putchar(a);
			_putchar(b);
			_putchar(':');
			_putchar(c);
			_putchar(d);
			_putchar('\n');
		}
	}
}
