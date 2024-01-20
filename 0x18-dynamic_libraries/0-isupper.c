#include "main.h"
#include <stdio.h>
/**
 * _isupper - this function checks if its parameter is lower case or uper case
 * @c: the parameter in form of an int
 * Return: 1 if lowercase and 0 if something else
 */

int _isupper(int c)
{
	if (c  >= ('A') && c <= ('Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
