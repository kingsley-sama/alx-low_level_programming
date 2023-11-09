#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - this functions sums all it's parameters
 *@n: this is the number of parameters
 *@separator: this is the separator
 *Return: sum if n > 0 and 0 if n == 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		str = va_arg(args, char *);
		if (i != n - 1 && separator != NULL)
			printf("%s%s", str, separator);
		else if (i != n - 1 && separator == NULL)
			printf("%s", str);
		else
			printf("%s", str);
		i++;
	}
	putchar('\n');
	va_end(args);
}
