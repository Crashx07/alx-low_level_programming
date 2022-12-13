#include <stdio.h>
/**
 * main - code entry point
 * Description: Outputs all combinations of nums between 0 and 10
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(48 + a);
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
