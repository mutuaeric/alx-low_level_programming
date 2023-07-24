#include "main.h"
/**
 * puts2 - prints string charactor followed by new line
 * @str: the charactor value
 */
void puts2(char *str)
{
	int o, b = 0, c = 0;
	char *d = str;

	while (*d != '\0')
	{
		d++;
		b++;
	}
	c = b - 1;
	for (o = 0; o <= c; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\0');
}
