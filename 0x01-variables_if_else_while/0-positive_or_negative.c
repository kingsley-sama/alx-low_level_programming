#include <stdio.h>
#include <stdlib.h>
/**
 * main - Checks to see if a variable is positive
 * Return: 0
 */
int main(void)
{
	int n;

	n = rand();
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
