#include "main.h"

int actual_sqrt_recursion(int n, int m);

/**
 * _sqrt_recursion - returns the square root
 * @n: number
 *
 * Return: square root if present
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - squre
 * square root of a number
 * @n: number
 * @m: number distracted
 *
 * Return: the square root
 */
int actual_sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (actual_sqrt_recursion(n, m + 1));
}
