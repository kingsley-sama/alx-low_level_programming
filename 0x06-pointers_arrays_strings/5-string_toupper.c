#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * string_toupper - This fuction changes lowercase letters to uppercase
 *@s: the source string to be changed
 * Return: dest
 */

char *string_toupper(char *s)
{

	int i = 0;
	char *dest = "";

	while (*(s + i) != '\0')
	{
		*(dest + i) = toupper(*(s + i));
	}
	return (dest);
}
