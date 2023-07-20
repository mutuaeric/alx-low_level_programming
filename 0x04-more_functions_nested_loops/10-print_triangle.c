#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: determines size of triangle
 */
void print_triangle(int size)
{
	int h, s, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (i = size - h; i >= 1; i--)
			{
				_putchar(' ');
			}
			for (s = 1; s < h; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}

