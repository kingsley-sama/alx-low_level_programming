#include "main.h"
#include <stdio.h>
/**
 *_puts_recursion - This function
 * Return: void
 *@s: this i
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
	putchar(*s);

}
