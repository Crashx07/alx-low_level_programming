#include "main.h"
/**
 * print_last_digit - finds and prints the last digit of a number
 * @ld: var for the last digit
 * Return: the last digit is returned
 */
int print_last_digit(int ld)
{
	int c;

	c = (ld % 10);

	if (c < 0)
	{
		c = (-1 * c);
	}

	_putchar(c + '0');
	return (c);
}
