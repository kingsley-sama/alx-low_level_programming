#include "main.h"
#include <stdio.h>

/**
 *_memset - copies n bytes from and address
 *@s: this is the destination to be written
 *@b: this is the content to fill the bytes with
 *@n: this is the number of bytes to fill
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
