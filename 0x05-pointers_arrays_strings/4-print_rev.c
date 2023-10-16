#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * print_rev - swaps the value of two integer
 * Return: i the length of the string
 *@s: this is the string to be printed out
 */
void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	for (; i <= 0; i--)
		putchar(*(s + i));
	putchar('\n');

}
