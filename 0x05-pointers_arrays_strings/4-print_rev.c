#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - swaps the value of two integer
 * Return: i the length of the string
 *@s: this is the string to be reversed and printed out
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		;

	printf("%d", i);
	for (; i >= 0; i--)
		putchar(*(s + i));

	putchar('\n');
}
