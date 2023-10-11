#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the string _putchar;
 * Return: void
 */
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		int i = 'a';

		while (i < 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}


}
