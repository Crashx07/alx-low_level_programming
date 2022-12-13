#include <stdio.h>
/**
 * main - main code block
 * Description: prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(48 + a);
		a++;
	}
	putchar('\n');
	return (0);
}
