#include <stdio.h>
#include "main.h"
/**
 * _isupper - a functio to find if a char is uppercase
 * @c: stores char
 * Return: 1 if uppercase and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
