#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - sums all command line arguments
 *@argc: total number of command line arguments
 *@argv: array of pointer to the arguments
 *Return: 0
 */
int main(int argc, char **argv)
{
	int cents[5] = {25, 10, 5, 2, 1};
	int amount;
	int i = 0, j = 0;

	(void)argc;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (amount >= cents[i])
		{
			amount -= cents[i];
			j++;
		}
	}
	printf("%d\n", j);
	return (0);
}
