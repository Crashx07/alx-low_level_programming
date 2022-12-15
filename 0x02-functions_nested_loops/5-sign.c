#include <stdio.h>
#include "main.h"
/**
 * print_sign: Checks the value of input
 * @n: stores single character
 * Return: -1, 1, or 0 depending on the value inputted
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		putchar("-");
		return (-1);
	}
}
