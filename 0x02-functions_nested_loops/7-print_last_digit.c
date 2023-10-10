#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @a: the positive or negative int input
 * Return: 1 if positive -1 if negative and 0 if 0
 */

int print_last_digit(int a)
{
	if (a >= 0)
	{
		_putchar(a % 10);
	}
	else
	{
		_putchar(-1 * (a % 10));
	}
	return (0);
}
