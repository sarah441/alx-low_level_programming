#include "main.h"

/**
 * _abs - compute absolute value of integer
 * @c: the number t be computed
 * Return: The absolute value of number or zero
 */
int _abs(int c)

{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
