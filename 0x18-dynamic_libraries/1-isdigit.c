#include "main.h"
#include <stdio.h>
/**
 * _isdigit - this function checks if its parameter is lower case or uper case
 * @c: the parameter in form of an int
 * Return: 1 if lowercase and 0 if something else
 */

int _isdigit(int c)
{
	if (c  >= ('0') && c <= (9 + '0'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
