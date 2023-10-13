#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints a diagonals to the terminal;
 *@n: the number of ‘\’ to be used
 * Return: void
 */
void print_diagonal(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
