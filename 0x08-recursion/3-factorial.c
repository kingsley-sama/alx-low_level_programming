#include "main.h"
#include <stdio.h>
/**
 *factorial - prints the factorial of a number
 * Return: n factorial
 *@n: the integer input
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	n = n * factorial(n - 1);
	return (n);
}
