#include "main.h"
/**
 * _strlen - returns length of string
 * @s: the string
 * Return: length
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

