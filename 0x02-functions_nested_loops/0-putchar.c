#include <stdio.h>
#include "Header.h"
/**
 * main - prints the string _putchar;
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char array[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	while (i < (sizeof(array) / sizeof(array[0])))
	{
		_putchar(array[i]);
		i++;
	}
	return (0);
}
