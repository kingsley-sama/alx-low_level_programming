#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints a square to the terminal;
 *@size: the number of ‘#’ to be used
 * Return: void
 */
void print_triangle(int size)
{
	int j;

	if (size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			int i;

			for (i = size; i >= 0; i--)
			{
				if (i <= j)
					_putchar('#');
				else
					_putchar(' ');

			}
			_putchar('\n');
		}
	}
}
