#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars and initializes
 * @size: Array size
 * @c: character to assign
 * Description: creates array of chars and initializes
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int k;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		str[k] = c;
	return (str);
}
