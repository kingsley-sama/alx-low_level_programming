#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the number of arguments it recieves
 *@argc: total number of command line arguments
 *@argv: array of pointer to the arguments
 *Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	(void)argc;
	while (*(argv + i) != NULL)
	{
		printf("%s\n", *(argv + i));
		i++;
	}
	return (0);
}
