#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *is_palindrome - This function
 * Return: void
 *@s: this i
 */
int is_palindrome(char *s)
{
	int i, j;

	i = 0;
	j = strlen(s) - 1;
	while (s[i] != '\0')
	{
		if (s[i] != s[j])
			return (0);
		i++;
		j--;
	}
	return (1);
}
