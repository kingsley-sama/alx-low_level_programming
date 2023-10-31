#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_grid - frees a grid
 *@height: the number fo columns in the array
 *@grid: pointer to pointer free_grid frees grid
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
