#include "main.h"
/**
 * puts2 - prints string charactor followed by new line
 * @str: the charactor value
 * Return: 0
 */
void puts2(char *str)
{
	int b = 0;

	while (str[b] != '\0')
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
		b++;
	}
	_putchar('\n');
}
