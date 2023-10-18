#include <stdio.h>
#include <math.h>

/**
 * main - prints the highest prime factor of any number n
 * Return: Always 0.
 */
int main(void)
{
	long int number = 612852475143;
	int largestPrimeFactor = 2;

	while (number > 1)
	{
		if (number % largestPrimeFactor == 0)
			number /= largestPrimeFactor;
		else
			largestPrimeFactor++;
	}
	printf("%d\n", largestPrimeFactor);
	return (0);
}
