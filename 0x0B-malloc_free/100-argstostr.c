#include "main.h"
#include <stdlib.h>
/**
* argstostr - function concatenates all arguments of program
* @ac: int input
* @av: double pointer array
* Return: 0
*/
char *argstostr(int ac, char **av)
{
	int k, n, r = 0, m = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (n = 0; av[k][n]; n++)
			m++;
	}
	m += ac;
	str = malloc(sizeof(char) * m + 1);
	if (str == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (n = 0; av[k][n]; n++)
		{
			str[r] = av[k][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
