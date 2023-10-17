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

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", a[i + 1]);
	putchar('\n');

}
