#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - multiplies arguments passed to it
 *@argc: total number of command line arguments
 *@argv: array of pointer to the arguments
 *Return: 0
 */
int main(int argc, char **argv)
{
	char *arg1, *arg2;
	long int a, b;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = malloc(strlen(*(argv + 1)) * sizeof(char));
	arg2 = malloc(strlen(*(argv + 2)) * sizeof(char));
	a = atoi(*(argv + 1));
	b = atoi(*(argv + 2));
	printf("%ld\n", a * b);
	return (0);
}
