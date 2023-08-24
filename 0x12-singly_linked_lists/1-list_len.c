#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the linked list elements number
 * @h: pointer
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}
