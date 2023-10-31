#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *argstostr - concatenates n number of strings
 *@s1: first input
 *@s2: second input
 *Return: a pointer to the duplicate
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k;
	int a = 0, b = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[i] != '\0'; i++)
		;
	for (; s2[j] != '\0'; j++)
		;
	k = i + j;
	arr = (char *)malloc(sizeof(char) * k + 1);
	if (arr != NULL)
	{
		for (; s1[a] != '\0'; a++)
			arr[a] = s1[a];
		for (; s2[b] != '\0'; b++)
			arr[a + b] = s2[b];
		arr[k] = '\0';
		return (arr);
	}
	return (NULL);
}
