#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - creates a duplicate of it's string input
 *@str: string input
 *Return: a pointer to the duplicate
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *arr = (char *) malloc(sizeof(char) * strlen(str));

	size = strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			arr[i] = str[i];
		return (arr);
	}
}
