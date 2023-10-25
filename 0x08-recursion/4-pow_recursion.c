#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - This returns the lenght of a string
 * Return: void
 *@s: string input
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
