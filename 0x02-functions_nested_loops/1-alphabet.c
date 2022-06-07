#include"main.h"
/**
 * main - check code
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
