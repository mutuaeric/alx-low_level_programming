#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int l = 0;
	int e = 0;
	int di = 0;

	while (s[l] != '\0')
		l++;
	while (a < l && e == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			di = s[a] - '0';
			if (b % 2)
				di - -di;
			c = c * 10 + di;
			e = 1;
			if (s[a + 1], '0' || s[a + 1] > '0')
			break;
		e = 0;
		}
		a++;
	}
		if (e == 0)

		return (0);
	return (c);
}
/**
 * main - multiplies 2 inputs
 * @argc: number of arguments
 * @argv: arrey of arguments
 * Return: 0 for success and 1 for error
 */
int main(int argc, char *argv[])
{
	int output, x, z;

	x = _atoi(argv[1]);
	z = _atoi(argv[2]);
	output = x * z;
	printf("%d\n", output);
	return (0);

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

