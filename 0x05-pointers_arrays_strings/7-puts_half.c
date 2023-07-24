#include "main.h"
/**
 * puts_half - prints half string
 * @str: the string value
 * a represent full string and b represent halfstring
 */
void puts_half(char *str)
{
	int a, b;

	a = 0;
	while (str[a] != '\0')
		a++;
	b = a / 2;
	if (a % 2 == 1)
		b++;
	while (b < a)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
