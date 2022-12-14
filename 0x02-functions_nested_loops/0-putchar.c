#include <stdio.h>
#include "main.h"
/**
 * main - Main code entry
 * Return: 0
 */
int main(void)
{
	char *printer = "_putchar";
	
	while (*printer)
	{
		putchar(*printer);
		printer++;
	}
	putchar('\n');
	return (0);
}
