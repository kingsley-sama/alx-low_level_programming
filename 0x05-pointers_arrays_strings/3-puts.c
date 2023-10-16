#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * _puts - swaps the value of two integer
 * Return: i the length of the string
 *@s: this is the string to be printed out
 */
void _puts(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		_putchar(*(s + i));
	_putchar('\n');

}
