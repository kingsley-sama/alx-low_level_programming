#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 to 9 except 2 and 4;
 * Return: void
 */
void print_most_numbers(void)
{
	int j = 0;

	while (j < 10)
	{
		if (j == 4 || j == 2)
			;
		else
			_putchar(j + '0');
		j++;
	}
	_putchar('\n');
}
