#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - print a message
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	write(STDERR_FILENO, "[anything]", 0);
	return (0);
}
