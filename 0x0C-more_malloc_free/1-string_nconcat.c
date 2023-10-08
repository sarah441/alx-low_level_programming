#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings .
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum bytes of s2 to concat to s1.
 *
 * Return: If fails - NULL.
 *         Otherwise - a pointer to space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		p[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		p[len++] = s2[i];

	p[len] = '\0';

	return (p);
}

