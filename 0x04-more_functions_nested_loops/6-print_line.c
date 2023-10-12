#include <stdio.h>
#include "main.h"
/**
 * print_line - prints a line to the terminal;
 *@n: the number of ‘_’ to be used
 * Return: void
 */
void print_line(int n)
{
	int j = 0;

	while (j < n)
	{
		_putchar('_');
		j++;
	}
	_putchar('\n');
}
