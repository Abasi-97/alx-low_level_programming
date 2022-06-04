#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always zero (SUCCESS)
 */
int main(void)
{
	int numset1, numset2;

	for (numset1 = 0 ; numset1 < 9 ; numset1++)
	{
		for (numset2 = numset1 + 1 ; numset2 < 10 ; numset2++)
		{
			putchar((numset1 % 10) + '0');
			putchar((numset2 % 10) + '0');

			if (numset1 == 8 && numset2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
