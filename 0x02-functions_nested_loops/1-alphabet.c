#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function to print all the alphabet 1x
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
