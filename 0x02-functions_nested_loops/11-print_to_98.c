#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints the first n natural numbers
 * @n: the number of natural numbers to be printed
 * Return: void
 */

void print_to_98(int n)
{
	int i = n;

	while (i >= 98)
	{
		printf("%d, ", i);
		i++;
	}
}
