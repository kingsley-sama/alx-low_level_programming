#include "main.h"
#include <stdio.h>

/**
 *set_string - copies the value of one string to another
 *@s: this is the string to overwrite
 *@to: this is the string to use in overwriting
 *Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
