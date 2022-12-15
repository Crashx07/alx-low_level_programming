#include <stdio.h>
#include "main.h"
/**
 * _isalpha - thisfunction checks is a character is an aplhabet
 * @c: variable for a single letter
 * Return: int 1 id c is a letter or int 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
