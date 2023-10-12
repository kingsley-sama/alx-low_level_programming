#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square to the terminal;
 *@size: the number of ‘#’ to be used
 * Return: void
 */
void print_triangle(int size)
{
	int j = 1;

	while (j < size)
	{
		int i = size - j;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('#');
		_putchar('\n');
		j++;
	}
}
