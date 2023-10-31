#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *alloc_grid - allocates memory for a 2 by 2 array
 *@width: the number of rows in the array
 *@height: the number fo columns in the array
 *Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int  **arr = (int **)malloc(sizeof(int *) * height);

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	if (arr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			*(arr + i) = malloc(width * sizeof(int));
			if (arr[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
					free(*(arr + j));
					return (NULL);
				}


			}
		}
		return (arr);
	}
	free(arr);
	return (NULL);
}
