#include "main.h"
/**
 * rev_string - reverses string
 * @s: the string
 */
void rev_string(char *s)
{
	char rev = s[0];
	int l, a, h;

	for (l = 0; s[l] != '\0'; l++)
	;
		a = 0;
		h = l / 2;
	while (h--)
	{
		rev = s[l - a - 1];
		s[l - a - 1] = s[a];
		s[a] = rev;
		a++;
	}
}
