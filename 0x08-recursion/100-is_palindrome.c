#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/**
 *is_palindrome - This function
 * Return: void
 *@s: this i
 *@start : this is the start index
 *@end : this is the end index
 */
int is_palindrome_recursive(char *s, int start, int end);
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
		return (1);
	return (is_palindrome_recursive(s, 0, length - 1));
}
/**
 *is_palindrome_recursive - This function
 *@s: this is the string input
 *@start : this is the start index
 *@end : this is the end index
 * Return: 1 if succes 0 if failure
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}
