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
	int total = 0;
	int amount = atoi(argv[1]);
	int i = 0,j = 0;
	

	/* 	while (i < 5) */
	/* 	{ */
	/* 		while (total <= amount) */
	/* 		{ */
	/* 			if (cents[j] > amount) */
	/* 				break; */
	/* 			total += cents[j]; */
	/* 		} */
	/* 		j--; */
	/* 		i++; */
	/* 	} */
	/* 	printf("%d\n", j); */
	/* 	return (argc); */
	/* } */
	for (i = 0; i < 5; i++) {
		while (amount >= cents[i])
		{
			amount -= cents[i];
			j++;
		}
	}
	printf("%d\n", j);
	return (argc);
}
