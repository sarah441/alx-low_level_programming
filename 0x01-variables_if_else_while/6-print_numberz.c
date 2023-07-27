#include <stdio.h>

/**
  *main - Entry point
  *description : print numbers of base 10
  *Return:  Always 0
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	printf("\n");
	return (0);
}
