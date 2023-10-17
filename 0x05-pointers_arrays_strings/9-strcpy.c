#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcpy - copies a string and return the copy
 * Return: i the length of the string
 *@src: this is the source string
 *@dest: this is the destination string
 *Return: the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(src + i) != '\0'; i++)
		;
	for (j = 0; j < i; j++)
		*(dest + j) = *(src + j);
	return (dest);

}
