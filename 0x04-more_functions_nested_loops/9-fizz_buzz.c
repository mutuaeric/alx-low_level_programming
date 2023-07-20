#include <stdio.h>
/**
 * main - prints 1- 100
 * Fizz represent 3, Buzz represents 5, and FizzBuzz represent 15
 * Return: Always 0
 */
int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if ((d % 3) == 0 && (d % 5) == 0)
			printf("FizzBuzz");
		else if ((d % 3) == 0)
			printf("Fizz");
		else if ((d % 5) == 0)
			printf("Buzz");
		else
			printf("%d", d);
		if (d == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
