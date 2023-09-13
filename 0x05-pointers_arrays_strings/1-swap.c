#include "main.h"
/**
  * swap_int - swap integer
  * @b: integer
  * @a: interger
  * Return: return void
  */

void swap_int(int *a, int *b)
{
	int f = *a;
	*a = *b;
	*b = f;
}
