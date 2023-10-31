#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - concatenates to strings
 *@s1: first input
 *@s2: second input
 *Return: a pointer to the duplicate
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k;
	int a = 0, b = 0;
	char *arr;
	char *str1, *str2;

	if (s1 == NULL && s2 == NULL)
	{
		str1 = "";
		return (str1);
	}
	else if (s2 == NULL && s1 != NULL)
	{
		str1 = (char *)malloc(sizeof(char) * strlen(s1) + 1);
		if (str1 != NULL)
		{
			for (; s1[i] != '\0'; i++)
				str1[i] = s1[i];
			str1[i + 1] = '\0';
			return (str1);
		}
		return (NULL);
	}
	else if (s1 == NULL && s2 != NULL)
	{
		str2 = (char *)malloc(sizeof(char) * strlen(s2) + 1);
		if (str2 != NULL)
		{
			for (; s2[i] != '\0'; i++)
				str2[i] = s2[i];
			str2[i + 1] = '\0';
			return (str2);
		}
		return (NULL);
	}
	else
	{
		for (; s1[i] != '\0'; i++)
			;
		for (; s1[j] != '\0'; j++)
			;
		k = i + j + 3;
		arr = (char *)malloc(sizeof(char) * k);
		for (; s1[a] != '\0'; a++)
			arr[a] = s1[a];
		for (; s2[b] != '\0'; b++)
			arr[a + b] = s2[b];
		arr[k] = '\0';
		return (arr);
	}
}

