#include"main.h"
/**
 * print_alphabet - Entry point
 *
 * Return - 0
 */
void print_alphabet(void)
{
	char az;

	az = 'a';
	while (az <= 'z')
	{
		_putchar(az);
		az++;
	}
	_putchar('\n');
}
