#include <stdio.h>
#include "main.h"
/**
 * main - code entry point
 * Description - Outputs the alphabet
 * Return - 0
 */
void print_alphabet(void)
{
	int n = 'a';

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
