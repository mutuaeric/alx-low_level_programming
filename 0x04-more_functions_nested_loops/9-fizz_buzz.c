#include <stdio.h>
/**
 * main - prints 1- 100
 * Fuzz represent 3, Buzz represents 5, and FuzzBuzz represent 15
 * Return: Always 0
 */
int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if ((d % 3) == 0 && (d % 5) == 0)
			printf("FuzzBuzz");
		else if ((d % 3) == 0)
			printf("Fuzz");
		else if ((d % 5) == 0)
			printf("Buzz");
		else
			printf("%d", d);
		if (d == 100)
			continue;
		printf(" ");
	}
	printf('\n');

	return (0);
}
