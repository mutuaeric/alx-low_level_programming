#include "main.h"
/**
 * _isupper - checks uppercase char
 * @c: test variable
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
