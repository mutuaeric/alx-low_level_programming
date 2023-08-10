#include "main.h"
#include <stdlib.h>
/**
 * _memset - fills memory with constant
 * @s: pointer to the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - uses malloc to allocate array memory
 * @nmemb:array length
 * @size: element size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);
	_memset(m, 0, nmemb * size);

	return (m);
}
