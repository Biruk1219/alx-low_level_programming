#include "main.h"
#include <stdio.h>

/**
 *_strncat - concatenates two strings,
 *@dest: destination.
 *@src: source.
 *@n: amount of bytes used from src.
 *Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int loop = 0, loop2 = 0;

	while (*(dest + loop) != '\0')
	{
		loop++;
	}
	while (loop2 < n)
	{
		*(dest + loop) = *(src + loop2);
		if (*(src + loop2) == '\0')
			break;
		loop++;
		loop2++;
	}
	return (dest);
}

