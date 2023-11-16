#include <stdio.h>
#include "main.h"
/**
 * my_function - this function executes first before the main function
 * Return: void
 */
void my_function(void)
{
	char *str1 = "You're beat! and yet, you must allow,";
	char *str2 = "\nI bore my house upon my back!\n";

	printf("%s%s", str1, str2);
}
