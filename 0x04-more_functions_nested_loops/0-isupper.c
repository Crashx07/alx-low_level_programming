#include "main.h"
/**
 * _isupper - Checksif a character is in upper case
 * @c: stores the value of a character
 * Return: 1 if uppercase and 0 if not
 */
int _isupper(int c)
{
	int y;

	y = isupper(c);
	if (y)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
