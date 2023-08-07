#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies 2 inputs
 * @argc: number of arguments
 * @argv: arrey of arguments
 * Return: 0 for success and 1 for error
 */
int main(int argc, char *argv[])
{
	int output, x = 0, z = 0;

	if (argc == 3)
	{
		x = _atoi(argv[1]);
		z = _atoi(argv[2]);
		output = x * z;
	printf("%d\n", output);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
