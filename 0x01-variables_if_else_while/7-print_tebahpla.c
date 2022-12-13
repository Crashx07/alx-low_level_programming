#include <stdio.h>
/**
 * main - main code block
 * Description: prints alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
