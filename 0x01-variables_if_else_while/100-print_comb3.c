#include <stdio.h>

/**
 * main - Print lowercase alphabets followed by uppercase
 *alphabets and a new line
 * Return: 0
 */
int main(void)
{
	for (int a = 48; a < 58; a++)
	{

		for (int b = 48; b < 58; b++)
		{

			putchar(a);
			putchar(b);
			if (a == 57 && b == 57)
			{
			}
			else
			{
				putchar(44);
				putchar(32);
			}

		}
	};

	putchar('\n');
	return (0);
}
