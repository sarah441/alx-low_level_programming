#include <stdlib.h>

/**
 * argstostr - concatenates
 * @ac: number of args
 * @av: array of args
 *
 * Return: pointer to a new string,NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int p, j, k, len;

	/* check for NULL */
	if (!ac || !av)
		return (NULL);

	/* get length of resulting string */
	for (p = 0, len = 0; p < ac; p++)
	{
		for (j = 0; av[p][j] != '\0'; j++)
			len++;
		len++;
	}

	/* allocate memory for string */
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	/* copy arguments into string */
	for (p = 0, k = 0; p < ac; p++)
	{
		for (j = 0; av[p][j] != '\0'; p++, k++)
			str[k] = av[p][j];
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
