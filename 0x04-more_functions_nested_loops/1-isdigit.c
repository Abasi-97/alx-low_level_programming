#include"main.h"
/**
 * _isdigit - checks character for a digit
 * @c - the character to print
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
