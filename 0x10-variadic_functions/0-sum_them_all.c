#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - sum of all
* @n: n number of numbers
* Return: sum or if n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list numbers;

	if (n)
	{
		va_start(numbers, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(numbers, int);
		}
		va_end(numbers);
	}
	return (sum);
}
