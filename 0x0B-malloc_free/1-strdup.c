#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplecate
 * @str: char
 * Return: always 0
 */
char *_strdup(char *str)
{
	char *m;
	int i = 0, size = 0;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
