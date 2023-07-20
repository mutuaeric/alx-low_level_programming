#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: determines size of triangle
 */
void print_triangle(int size)
{
	int h, i;

	for (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (i = size - h; i > 0; i--)
			{
				_putchar(' ');
			}
			for (i = 0; i < h; i++)
			{
				_putchar('#');
			}
			if (h == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
