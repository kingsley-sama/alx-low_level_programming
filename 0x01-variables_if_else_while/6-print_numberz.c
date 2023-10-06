#include <stdio.h>

/**
 * main - Prints single variable numbers in seperate lines
 * Return: 0
 */
int main(void)
{
	int a = 0;

	for (; a < 10; a++)
	{
		putchar(a);
		putchar('\n');
	}
	return (0);
}
