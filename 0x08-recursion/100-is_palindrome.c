#include "main.h"

int check_pal(char *s, int i, int l);
int is_palindrome(char *s);
/**
 * is_palindrome - check if string is palindrome
 * @s: input
 * Return: 1 if string is palindrome else 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns string length
 * @s: input
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s +  1));
}
/**
 * check_pal - check for palindrome recursively
 * @s: input
 * @i: ileration
 * @l: string length
 * Return: 1 if palidrome elso 0
 */
int check_pal(char *s, int i, int l)
{
	if (*(s + 1) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (check_pal(s, i + 1, l - 1));
}
