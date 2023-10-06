#include <stdio.h>

/**
 * main - Print lowercase alphabets followed by uppercase
 *alphabets and a new line
 * Return: 0
 */
int main(void)
{
	int a = 48;
	int b = 97;

	for (; a < 58; a++)
		putchar(a);
	for (; b < 103; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
