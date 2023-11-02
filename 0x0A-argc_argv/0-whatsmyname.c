#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main -prints it's name
 *@argc: total number of command line arguments
 *@argv: array of pointer to the arguments
 *Return: 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (argc);
}

