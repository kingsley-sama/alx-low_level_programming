#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @a: the positive or negative int input
 * Return: 1 if positive -1 if negative and 0 if 0
 */

int print_last_digit(int a)
{
	int b;

	if (a >= 0)
	{
		b = (a % 10) + 48;
		_putchar(b);
	}
	else
	{
		b = (-1 * (a % 10)) + 48;
		_putchar(b);
	}
	return (0);
}
