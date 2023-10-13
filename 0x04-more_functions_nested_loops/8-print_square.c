#include <stddef.h>
#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square to the terminal;
 *@size: the number of ‘#’ to be used
 * Return: void
 */
void print_square(int size)
{
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			int i;

			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
