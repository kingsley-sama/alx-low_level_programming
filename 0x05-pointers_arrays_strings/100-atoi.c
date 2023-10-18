#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <ctype.h>
#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i, j = 0, k = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == '-')
			j++;
		else if (isdigit(*(s + i)))
			k = k * 10 - (s[i] - '0');
	}
	if (j % 2 == 0)
		return (-k);
	else
		return (k);

}
