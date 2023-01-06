#include "main.h"
#include <stdio.h>

/**
 *_strcat - concatenates two strings,
 *@dest: destination.
 *@src: source.
 *Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int loop = 0, loop2 = 0;

	while (*(dest + loop) != '\0')
	{
		loop++;
	}
	while (loop2 >= 0)
	{
		*(dest + loop) = *(src + loop2);
		if (*(src + loop2) == '\0')
			break;
		loop++;
		loop2++;
	}
	return (dest);
}

