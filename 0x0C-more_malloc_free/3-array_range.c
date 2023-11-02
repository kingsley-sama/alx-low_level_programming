#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *array_range - allocates memory	printf("%s %s\n", s1, s2);
 *@min: minimum
 *@max: maximum
 *Return: void pointer to the address
 */
int *array_range(int min, int max)
{
	int *arr;
	int range = max - min, i = 0;

	if (min > max)
		return (NULL);
	arr = calloc(sizeof(int), range + 1);
	if (arr == NULL)
		return (NULL);
	while (i <= range)
	{
		*(arr + i) = min + i;
		i++;
	}
	return (arr);
}
