#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_array - swaps the value of two integer
 * Return: i the length of the string
 *@a: the integer array
 *@n: the index to be printed out;
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}

	if (n > 0)
	{
		printf("%d", a[i]);
	}

	putchar('\n');

}
