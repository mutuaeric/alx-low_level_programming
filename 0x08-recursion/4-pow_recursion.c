#include "main.h"
/**
 * _pow_recursion - function to return x raised to power of y
 *@x: input
 *@y: raise power
 * Return: Returns x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
