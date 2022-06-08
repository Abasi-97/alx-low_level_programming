#include"main.h"
/**
 * _isalpha - Entry point
 *
 * Return - 1 if lower or upper, 0 if nit alphabet
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
