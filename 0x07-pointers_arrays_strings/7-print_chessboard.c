#include "main.h"
#include <stdio.h>

/**
 *print_chessboard - finds a value within a string
 *@a: array of an array of elemets
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (a[i][j] == ' ')
				putchar(' ');
			else
				putchar(a[i][j]);
			j++;
		}
		putchar('\n');
		i++;
	}
}
