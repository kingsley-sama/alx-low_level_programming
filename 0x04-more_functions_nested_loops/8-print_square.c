#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square to the terminal;
 *@size: the number of ‘#’ to be used
 * Return: void
 */
void print_square(int size)
{
	int j = 0;

	while (j < size)
	{
		int i = 0;

		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
