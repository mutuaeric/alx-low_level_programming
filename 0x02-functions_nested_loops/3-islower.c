#include "main.h"
/**
 * _islower - checks for lowercase charactors
 * @c: the checking charactor
 * Return: 1 (lowercase) or 0 (anything else)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
