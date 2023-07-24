#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates random passwords
 * pass stand for password, i indes, s sum, d diff half 1 and e diff half 2
 * Return: Always 0
 */
int main(void)
{
	char pass[84];
	int i = 0, s = 0, d, e;

	srand(time(0));
	while (s < 2772)
	{
		pass[i] = 33 + rand() % 94;
		s += pass[i++];
	}
	pass[i] = '\0';
	if (s != 2772)
	{
		d = (s - 2772) / 2;
		e = (s - 2772) / 2;
		if ((s - 2772) % 2 != 0;
		d++;

		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + d))
			{
			pass[i] -= d;

			break;
			}
		}
	for (i = 0; pass[i]; i++)
	{
		if (pass[i] >= (33 + e))
		{
			pass[i] -= e;

			break;
		}
	}
	}
	printf("%s", pass);
	return (0);
}
