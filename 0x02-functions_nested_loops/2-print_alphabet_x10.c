#include"main.h"
/**
 * main - Entry point
 *
 * Return - Always 0 (SUCCESS)
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 1 ; i <= 10 ; 1++)
	{
		for (letter = 'a'; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
