#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the value of two integer
 * Return: void
 *@a: this is the first variable
 *@b: this is the second variable
 */
void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
