#include <stdio.h>

/**
 * main - Print lowercase alphabets followed by uppercase
 *alphabets and a new line
 * Return: 0
 */
int main(void)
{
	int a = 97;

	for (; a < 12; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
