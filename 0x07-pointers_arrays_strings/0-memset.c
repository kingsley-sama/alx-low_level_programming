#include "main.h"
#include <stdio.h>

/**
 *_memcpy - copies n bytes from and address
 *@dest: this is the destination for storing the bytes
 *@src: this is the source destination of the source
 *@n: this is the number of bytes to be copied
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
