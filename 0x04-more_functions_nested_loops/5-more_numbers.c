#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14;
 * Return: void
 */
void more_numbers(void)
{
	int j = 0;

	while (j < 15)
	{
		if (j >= 10)
			_putchar((j / 10) + 48);
		_putchar((j % 10) + 48);
		j++;
	}
	_putchar('\n');
}
