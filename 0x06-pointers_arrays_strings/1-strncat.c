#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - This fuction concatenates n bytes of a string to another
 *@dest: this is the first string
 *@src: this is the second string
 *@n: the number of bytes to be concatenated
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = strlen(dest);
	for (i = 0; i < n; i++)
	{
		*(dest + (j + i)) = src[i];
	}
	return (dest);
}
