#include "main.h"
#include <stdio.h>
/**
 * add - retuns the sum of two integers
 * @a: this is the first integer input
 * @b: this is the second integer input
 * Return: sume
 */

int add(int a, int b)
{

	int sum = a + b;
	int c = sum / 10;
	int d = sum % 10;

	if (sum >= 0)
	{
		c = sum / 10;
		d = sum % 10;

	}
	else if (sum < 0)
	{
		c = sum / 10;
		d = -1 * (sum % 10);

		_putchar('-');
	}
	return sum;
}
