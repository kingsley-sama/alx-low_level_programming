#include "main.h"
#include <stdio.h>
/**
 *_pow_recursion - returns x to power y
 * Return: x to power y
 *@x: number
 *@y: base
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
