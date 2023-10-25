#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer out bit by bit
 *@n: this is the integer to be printed out
 * Return: void
 * notice how a number (i) is multiplied by 10 continuosly
 * as long as the input sting is not elimiated
 */

void print_number(int n)
{
	int i, k;

	i = 1;
	if (n < 0)
	{
		putchar('-');
		n = -1 * n;
	}
	k = n;
	while (n / 10 > 0)
	{
		n /= 10;
		i *= 10;
	}
	while (i > 0)
	{
		putchar((k / i) % 10 + '0');
		i /= 10;
	}
}
