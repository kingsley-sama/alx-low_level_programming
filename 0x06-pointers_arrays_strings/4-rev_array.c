#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * reverse_array - compares two strings
 *@n: number of elements in the array
 *@a: integer pointer to the array
 * Return: 0 if s1 == s2, -15 if s1 > s2; 15 is s1 < s2
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (a[i] < n / 2)
	{
		int j;

		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
		i++;
	}

}
