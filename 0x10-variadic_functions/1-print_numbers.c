#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - this functions sums all it's parameters
 *@n: this is the number of parameters
 *@separator: this is the separator
 *Return: sum if n > 0 and 0 if n == 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num = 0;
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		num = va_arg(args, int);
		if (i != n - 1 && separator != NULL)
			printf("%d%s", num, separator);
		else if (i != n - 1 && separator == NULL)
			printf("%d", num);
		else
			printf("%d", num);
		i++;
	}
	putchar('\n');
	va_end(args);
}
