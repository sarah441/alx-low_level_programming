#include "main.h"

/**
 * binary_to_uint - converts biinary number to int
 * @b: pointer to the binary
 *
 * Return: the converted number, or 0 
 * or contains chars different from 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nu = 0, i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		nu <<= 1;
		nu += b[i] - '0';
		i++;
	}
	return (nu);
}
