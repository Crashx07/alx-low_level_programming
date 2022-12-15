#include "main.h"
/**
 * _isdigit - checks if a char is a number
 * @C: input for thevar
 * Return: return 1 if c is digit and 0 if not
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
