#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @str: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(const char *str)
{
	int result = 0;
	int sign = 1;
	int a = INT_MAX;

	while (*str == ' ' || *str == '\t')
		str++;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			int digit = *str - '0';

			if (result > a / 10 || (result == a / 10 && digit > a % 10))
			{
				return ((sign == 1) ? a : a);
			}

			result = result * 10 + digit;
		}
		else
		{
			break;
		}

		str++;
	}

	return (sign * result);
}
