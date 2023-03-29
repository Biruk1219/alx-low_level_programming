#include "main.h"

/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int initial;

	for (initial = 0; initial < n; initial++)
	*(dest + initial) =  *(src + initial);

	return (dest);
}
