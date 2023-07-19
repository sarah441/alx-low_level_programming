#include "main.h"
/**
* print_sign - Prints the sign of an integer
* @n: The integer to check
*
* Return: 1 if n is positive, -1 if n is negative, 0 if n is zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
