#include "main.h"
/**
 * malloc_checked - uses malloc to allocate memory
 *@b: input
 *Return: pointer to array
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
