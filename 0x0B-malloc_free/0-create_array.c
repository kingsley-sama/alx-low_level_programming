#include "main.h"
/**
 *create_array - this functions creates an array of size n
 *and populates it with char c
 *@c: this is the character to populate the array with
 *@size: this is the size of the array can be 0
 *Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			*(arr + i) = c;

		}
		return (arr);
	}
	else
	{
		return (NULL);
	}

}
