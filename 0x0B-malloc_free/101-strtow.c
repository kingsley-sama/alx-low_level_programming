#include "main.h"
#include <stdlib.h>
/**
 *strtow - Splits a string into words.
 *@str: The string to split.
 *Return: An array of pointers to the words in the stringq
 */
char **strtow(char *str)
{
	int i;
	char *word = str;
	int len = (int)strlen(str) + 1;
	char **words = (char **)malloc(sizeof(char *) * len);

	if (str == NULL || *str == '\0')
		return (NULL);


	if (words == NULL)
		return (NULL);
	memset(words, 0, sizeof(char *) * len);


	for (i = 0; i < len - 1; i++)
	{
		while (*word == ' ')
			word++;
		if (*word == '\0')
			break;
		words[i] = word;
		while (*word != ' ')
			word++;
		*word = '\0';
	}
	return (words);
}
