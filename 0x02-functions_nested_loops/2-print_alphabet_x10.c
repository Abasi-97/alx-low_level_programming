#include"main.h"
/**
 * main - Entry point
 *
 * Return - Always 0 (SUCCESS)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar(i);
		i++;
	}
	_putchar(' ');
	_putchar('\n');
}
