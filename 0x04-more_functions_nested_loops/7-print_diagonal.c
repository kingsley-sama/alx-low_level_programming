#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints a diagonals to the terminal;
 *@n: the number of ‘\’ to be used
 * Return: void
 */
void print_diagonal(int n)
{
	int j = 0;

	while (j < n && n > 0)
	{
		if(j == n - 1)
			_putchar('\\');
		else
			_putchar(' ');
		j++;
	}
	_putchar('\n');
}
