#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @s: input
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
