#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strlen - find string length
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 or null in failure
 */
char *str_concat(char *s1, char *s2)
{
	int a1, a2, 1;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	a1 = _strlen(s1);
	a2 = _strlen(s2);
	m = malloc((a1 + a2) * sizeof(char) + 1);
	if (m == 0)
		return (0);
	for (i = 0; i <= a1 + a2; i++)
	{
		if (i < a1)
			m[i] = s1[i];
		else
			m[i] = s2[i - a1];
	}
	m[i] = '\0';
	return (m);
}
