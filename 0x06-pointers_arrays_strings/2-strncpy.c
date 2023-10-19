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
	int i, j;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
