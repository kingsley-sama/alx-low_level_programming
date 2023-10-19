#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * reverse_array - compares two strings
 *@n: number of elements in the array
 *@a: integer pointer to the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;
	int b = n - 1;

	while (i < n / 2)
	{
		j = *(a + i);
		*(a + i) = *(a + (b - i));
		*(a + (b - i)) = j;
		i++;
	}

}
