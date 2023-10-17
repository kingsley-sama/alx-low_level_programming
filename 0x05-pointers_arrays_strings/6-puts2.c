#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - print all even part of an integer
 * Return: void
 *@s: this is the string to be printed out
 */
void puts2(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (i % 2 == 0)
			putchar(*(s + i));
		else
			;

	putchar('\n');
}
