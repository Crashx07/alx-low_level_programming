#include <stdio.h>
#include "main.h"
/**
 * _islower - function that checks of a letter
 * is lower or upper case
 * Return: int 1 = true or int 0 = false
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
