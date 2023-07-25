#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if string is a palindrome; otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s)
	{
		is_palindrome(s + 1);
	}
}
