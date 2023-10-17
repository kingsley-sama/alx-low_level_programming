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
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		;
	for (; i >= 0; i--)
		if (*(s + i) == '\0')
			;
		else
			putchar(*(s + i));

}
