#include <stdio.h>

/**
 * main - Print lowercase alphabets followed by uppercase
 *alphabets and a new line
 * Return: 0
 */
int main(void)
{
	int a = 48;

	for (; a < 58; a++)
	{

		int b = 48;

		for (; b < 58; b++)
		{
			int c = 48;

			for (; c < 58; c++)
			{
				int d = 48;

				for (; d < 58; d++)
				{
					if (a + b < c +d )
					{
						putchar(a);
						putchar(b);
						putchar(32);
						putchar(c);
						putchar(d);
						if (a != 57 || b != 56 || c != 57 || d != 57)
						{
							putchar(44);
							putchar(32);
						}

					}
				}

			}

		}
	};

	putchar('\n');
	return (0);
}
