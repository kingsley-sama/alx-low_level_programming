#include <stdio.h>
/**
 * _islower - this function checks if its parameter is lower case or uper case
 * @c: the parameter in form of an int
 * Return: 1 if lowercase and 0 if something else
 */

int main(void)
{
	int b = 1;
	int i =0;
	int sum = 0;

	while(i < 10)
	{
		sum = sum + b;
		printf("%d\n", sum);
		b = sum;
		sum = b;
		i++;
	}
	return 0;
}
