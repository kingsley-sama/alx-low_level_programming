#include <stdio.h>
/**
 * print_pair - a unique pair of two-digit numbers in ascending order.
 * @a: The first digit of the pair.
 * @b: The second digit of the pair.
 * @c: The third digit of the pair.
 * @d: The fourth digit of the pair.
 */

void print_pair(char a, char b, char c, char d)
{
	putchar(a);
	putchar(b);
	putchar(' ');
	putchar(c);
	putchar(d);

	if (a != '9' || b != '8' || c != '9' || d != '9')
	{
		putchar(',');
		putchar(' ');
	}
}

/**
 * main - Print unique pairs of two-digit numbers in ascending order
 * Return: 0
 */
int main(void)
{
	char a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = (a == b) ? (b + 1) : '0'; d <= '9'; d++)
					print_pair(a, b, c, d);

			}
		}
	}

	putchar('\n');
	return (0);
}
