#include"main.h"
/**
 * is_lower - Entry point
 * @c - character to check
 *
 * Return - Always 0 (SUCCESS)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
