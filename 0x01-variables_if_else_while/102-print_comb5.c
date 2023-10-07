#include <stdio.h>

/**
 * main - Print unique pairs of two-digit numbers in ascending order
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = (a == b) ? (b + 1) : '0'; d <= '9'; d++)
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
			}
		}
	}

	putchar('\n');
	return (0);
}
