#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - swaps the value of two integer
 * Return: void
 *@s: this is the string to be reversed and printed out
 */
void rev_string(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		;
	for (; i >= 0; i--)
		if (*(s + i) == '\0')
			;
		else
			putchar(*(s + i));

	putchar('\n');
}
