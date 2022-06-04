#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always zero (SUCCESS)
 */
int main(void)
{
	int num1, num2 ,num3;
	for(num1 = 0 ; num < 8 ; num++)
	{
		for(num2 = num1 + 1 ; num2 < 9 ; num2++)
		{
			for(num3 = num3 + 1; num3 < 10 ; num++)
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				putchar((num3 % 10) + '0');
				
				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;
				putchar(',');
				putchar('');
			}
		}
	}
	putchar('\n');
	return 0;
}
