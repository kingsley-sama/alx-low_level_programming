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
	char *arr;

	if (str == NULL)
	{
		arr = "";
		return (str);
	}
	arr = (char *) malloc(sizeof(char) * (strlen(str) + 1));
	size = strlen(str);
	if (arr == NULL)
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
