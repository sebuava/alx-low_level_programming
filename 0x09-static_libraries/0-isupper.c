#include "main.h"
/**
 * _isupper - uppercase letters
 * @k: character to check
 *
 * Return: 0 or 1
 */
int _isupper(int k)
{
	if (k >= 'a' && k <= 'z')
		return (1);
	else
		return (0);
}
