#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion - This function prints  a string in reverse
 * Return: void
 *@s: this is the character to be returned
 */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
