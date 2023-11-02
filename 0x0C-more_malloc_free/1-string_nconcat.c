#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *malloc_checked - allocates memory
 *@b: Total bytes of memory
 *Return: void pointer to the address
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *str;
	if (strlen(s2) >= n)
		str = malloc(sizeof(char) * (strlen(s1) + n + 1));
	else
		str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	str = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (str == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "hello";
	if (s2 == NULL)
		s2 = "world";

	printf("%s %s\n", s1, s2);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] ='\0';
	return (str);
}
