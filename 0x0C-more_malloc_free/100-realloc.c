#include "main.h"
#include <stdlib.h>
/**
 * _realloc - allocate memmory block using malloc and free
 * @ptr: pointer
 * @old_size: size of allocated space
 * @new_size: size of new memory block
 * Return: NULL if new_size is 0 else ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (a = 0; old_size && a < new_size; a++)
			*((char *)p + a) = *((char *)ptr + a);
		free(ptr);
	}
	return (p);
}
