#include "main.h"
#include <stdio.h>

/**
 *_strchr - finds a value within a string
 *@s: this is the string to loop over
 *@c: this is the value to find
 *Return: address of the first match
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
		if (*(s + i) == c)
			return (s);
		else if (*(s + i + 1) == c)
			return (s + i + 1);

		i++;

	}
	return (s + i + 1);
}
