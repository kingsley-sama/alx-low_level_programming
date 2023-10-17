#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - swaps the value of two integer
 * Return: i the length of the string
 *@s: this is the string to be printed out
 */
void puts_half(char *s)
{
	int i, n;

	for (i = 0; *(s + i) != '\0'; i++)
		;
	if (i % 2 == 0)
	{
		n = i / 2;
		while (n <= i)
		{
			putchar(*(s + n));
			n++;
		}
	}
	else
	{
		n = (i - 1) / 2;
		while (n <= i)
		{
			putchar(*(s + n));
			n++;
		}
	}
}
