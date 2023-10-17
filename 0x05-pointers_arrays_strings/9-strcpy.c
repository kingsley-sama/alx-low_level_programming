#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - swaps the value of two integer
 * Return: i the length of the string
 *@s: this is the string to be printed out
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(src + i) != '\0'; i++)
		;
	for (j = 0; j < i; j++)
		*(dest + j) = *(src + j);

}
