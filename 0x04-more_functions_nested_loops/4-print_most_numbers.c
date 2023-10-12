#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0 to 9 except 2 and 4;
 * Return: void
 */
void print_most_numbers(void)
{

	int i;
	
	for  (i = 0;i < 10; i++)
	{
		int j;
		for(j = 0; j < 15
			    ; j++)
		{
			int num = 10 * j;
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}


}
