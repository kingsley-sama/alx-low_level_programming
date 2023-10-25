#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - This returns the lenght of a string
 * Return: void
 *@s: string input
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	n = n * factorial(n-1);
	return (n);
}
