#include "main.h"
/**
 * print_array - prints array elements
 * @a: input array
 * @n: array length
 * i represent array index
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	printf("\n");
}
