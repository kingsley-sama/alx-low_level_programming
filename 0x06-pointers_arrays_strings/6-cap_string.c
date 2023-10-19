#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _strncpy - This fuction concatenates n bytes of a string to another
 *@dest: this is the duplicate string
 *@src: the source string to be copied
 *@n: the number of bytes to be copied
 * Return: dest
 */

char *cap_string(char *s)
{

	int i = 0;
	char *dest = "";

	while (*(s + i) != '\0')
	{
		*(dest + i) = toupper(*(s + i));
	}
	return (dest);
}
