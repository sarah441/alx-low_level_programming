#include "main.h"

/**
 * _isupper - check if the letter is uppercase
 * @c: the number t be checked
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
