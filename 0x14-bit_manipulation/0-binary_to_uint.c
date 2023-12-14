#include "main.h"

/**
 *  binary_to_uint - This function converts a binary number to an unsigned int
 * @b: Paramater is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int num;

	num = 0;
	if (!b)
	{
		return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		num <<= 1;
		if (b[j] == '1')
			num += 1;
	}
	return (num);
}
