#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#
/**
 *main - sums all command line arguments
 *@argc: total number of command line arguments
 *@argv: array of pointer to the arguments
 *Return: 0
 */
int main(int argc, char **argv)
{
	int i, sum;
	long a;
	char *endptr;

	i = 0;
	(void)argc;
	while (*(argv + i) != NULL)
	{
		if (argc == 1)
		{
			putchar(0 + '0');
			putchar('\n');
			return (0);
		}
		if (i == 0)
		{
		}
		else
		{
			a = strtol(argv[i], &endptr, 10);
			if (*endptr == '\0')
				sum += a;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
