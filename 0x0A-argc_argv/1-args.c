#include <stdio.h>

/**
 * main - Prints number of arguments.
 * @argc: The number of new arguments.
 * @argv: An array of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	argc--;
	printf("%d\n", argc);

	return (0);
}
