#include <stdio.h>
#include "main.h"
/**
 * main - fizz buzz for numebrs from i - 100;
 * Return: 0
 */

int main(void)
{
	char *fizz = "Fizz";
	char *buzz = "Buzz";
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0)
			printf("%s", fizz);
		else if (i % 5 == 0)
			printf("%s", buzz);
		else
			printf("%d", 8);
		i++;
	}
	return (0);
}
