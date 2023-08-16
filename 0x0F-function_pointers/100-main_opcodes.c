#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int by, c;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	by = atoi(argv[1]);

	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (c = 0; c < by; c++)
	{
		if (c == by - 1)
		{
			printf("%02hhx\n", arr[c]);
			break;
		}
		printf("%02hhx ", arr[c]);
	}
	return (0);
}
