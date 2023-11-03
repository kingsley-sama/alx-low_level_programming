#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - allocates memory	printf("%s %s\n", s1, s2);
 *@s1: Total bytes of memory
 *@s2: Total bytes of memory
 *@n: concatenates n bytes from s2
 *Return: void pointer to the address
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0 ,a = 0;
	char *str;


	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	for(; s1[a] != '\0'; a++)
		;
	str = malloc(sizeof(char) * (a + n) + 1);
	if (str == NULL)
		return (NULL);

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
	str[i + j] = '\0';
	return (str);
}
