#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute in a day
 * Return: 0
 */
void jack_bauer(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 24; i++)
	{
		a = i / 10; /* doubles fnum */
		b = i % 10; /* singles fnum */
		for (j = 0; j < 60; j++)
		{
			c = j / 10; /* doubles snum */
			d = j % 10; /* singles snum */
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(58);
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
		}
	}
	_putchar(10);
}
