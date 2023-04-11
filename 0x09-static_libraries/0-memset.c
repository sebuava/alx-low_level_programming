#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @k: starting address of memory to be filled
 * @x: the desired value
 * @y: number of bytes to be changed
 * Return: changed array with new value for y bytes
 */

char *_memset(char *k, char x, unsigned int y)
{
	int h = 0;

	for (; y > 0; h++)
	{
		k[h] = x;
		y--;
	}
	return (k);
}
