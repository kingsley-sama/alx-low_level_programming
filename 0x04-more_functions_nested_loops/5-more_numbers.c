#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints the numbers from 0 to 14;
 * Return: void
 */
void more_numbers(void)
{
	int i;

	while (i < 10)
	{
		int j = 0;
		while(j < 15)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		if(i != 10)
			_putchar('\n');
		i++;

	}
}
