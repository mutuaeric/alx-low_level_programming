#include <stdlib.h>
#include "main.h"
/**
 * main - prints min number of coins for change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int n, z, output;
	int coins[] = {25, 10, 5, 2, 1};

	n = atoi(argv[1]);
	output = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (z = 0; z < 5 && n >= 0; z++)
	{
		while (n >= coins[z])
		{
			output++;
			n -= coins[z];
		}
	}
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", output);
	return (0);
}
