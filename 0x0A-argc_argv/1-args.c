#include <stdio.h>
#include "main.h"

/**
 * main - print number of passed arguments
 * @argc: number of arguments
 * @argv: arrey of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
