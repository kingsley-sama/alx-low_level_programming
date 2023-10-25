#include "main.h"
#include <stdio.h>

/**
 *print_chessboard - finds a value within a string
 *@a: array of an array of elemets
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	long int sum ;

	sum = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				sum = sum + a[i];
			j++;
		}
		i++;
	}
	printf("%ld\n", sum);
}
