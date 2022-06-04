#include<stdio.h>
/**
 * main - Entry point
 * 
 * Return: Always zero (SUCCESS)
 */
int main(void)
{
	char letter;
	for (letter = 'a' ; letter <= 'z' ; leter++)
	{
		if ((letter != 'e') && (letter != 'q'))
			putchar(letter);
	}
	
	putchar('\n');
	return (0);
}	
