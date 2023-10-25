#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - This returns the lenght of a string
 * Return: void
 *@s: string input
 */
int _sqrt_recursion(int n)
{
	const int a = n;

	n =_sqrt_recursion(n - 1);

	if (n < 0)
		return (-1);
	if (n * n == a)
		return(n);
	return (n);
}
