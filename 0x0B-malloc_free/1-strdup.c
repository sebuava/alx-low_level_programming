#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -function returns a pointer to the duplicated string
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *yyy;
	int k, w = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;
	yyy = malloc(sizeof(char) * (k + 1));

	if (yyy == NULL)
		return (NULL);
	for (w = 0; str[w]; w++)
		yyy[w] = str[w];
	return (yyy);
}
