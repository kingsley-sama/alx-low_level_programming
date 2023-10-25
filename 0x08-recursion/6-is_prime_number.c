#include <stdio.h>
#include "main.h"
/**
 * is_prime_recursive - Recursively check if a number is prime.
 * @n: The number to check for primality.
 * @i: The current divisor being tested.
 * is_prime_number - this function checks if a number is pri
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_recursive(n, i - 1));
}
/**
 * is_prime_number - Recursively check if a number is prime.
 * Return: 1 if 'n' is prime, 0 otherwise.
 *@n:number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_recursive(n, n - 1));
}
