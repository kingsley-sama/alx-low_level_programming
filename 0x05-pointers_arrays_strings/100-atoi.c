#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to integer
 * Return: i the length of the string
 *@str: this is the string to be changed to integer
 */
int _atoi(const char *str)
{
	int result = 0;
	int sign = 1;
	bool started = false;

	while (*str == ' ' || *str == '\t')
	{
		str++;
	}
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
		return (sign * result);
	}
