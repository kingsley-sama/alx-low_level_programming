#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - this functions prints all it’s args
 *@format: this is the separator
 *Return: void
 */
void print_all(const char * const format, ...)
{
	char *str;
	int num;
	char c;
	float float_num;
	unsigned int i = 0;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)%s", (format[i + 1] != '\0') ? ", " : "");
			printf("%s%s", str, (format[i + 1] != '\0') ? ", " : "");

			break;
		case 'c':
			c = (char)va_arg(args, int);
			printf("%c%s", c, (format[i + 1] != '\0') ? ", " : "");
			break;
		case 'i':
			num = va_arg(args, int);
			printf("%d%s", num, (format[i + 1] != '\0') ? ", " : "");
			break;
		case 'f':
			float_num = (float)va_arg(args, double);
			printf("%f%s", float_num, (format[i + 1] != '\0') ? ", " : "");
			break;
		default:
			break;
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}
