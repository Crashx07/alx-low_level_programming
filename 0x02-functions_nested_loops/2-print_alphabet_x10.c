#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_10x - this function prints\
 * the alphabet in 10 places
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a = 'a';
	int c = 0;

	while (c < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		c++;
		putchar('\n');
	}
}
