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

	_putchar(c);
	_putchar(d);
	_putchar('\n');
	return (sum);
}
