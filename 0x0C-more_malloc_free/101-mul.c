#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies arguments passed to it
 *@argc: total number of command line arguments
 *@argv: array of pointer to the arguments
 *Return: 0
 */
int main(int argc, char **argv)
{
	long int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(*(argv + 1));
	b = atoi(*(argv + 2));
	printf("%ld\n", a * b);
	return (0);
}
