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
	while (*(argv + i) != NULL)
		i++;
	printf("%d\n", i - 1);
	return (argc);
}
