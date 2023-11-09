#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *sum_them_all - this functions sums all it's parameters
 *@n: this is the number of parameters
 *Return: sum if n > 0 and 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	return (sum);
}
