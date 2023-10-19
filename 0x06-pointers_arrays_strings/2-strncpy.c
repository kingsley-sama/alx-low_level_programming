#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - This fuction concatenates n bytes of a string to another
 *@dest: this is the duplicate string
 *@src: the source string to be copied
 *@n: the number of bytes to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j = strlen(src);

	i = 0;
	while (i < n)
	{
		if (i < j)
			*(dest + i) = *(src + i);
		else
			*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
