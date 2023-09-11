#include "main.h"

/**
 * set_bit - sets a bit index as 1
 * @n: pointer to the target number
 * @index: set bit index as 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
