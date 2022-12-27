#include "main.h"
#include <stdio.h>

/**
 *leet - encodes a string into 1337
 *@s: input string.
 *Return: the pointer to dest.
 */

char *leet(char *s)
{
	int loop = 0, x;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + loop) != '\0')
	{
		for (x = 0; x < 5; x++)
	{
		if (*(s + loop) == low_letters[x] || *(s + loop) == upp_letters[x])
		{
			*(s + loop) = numbers[x];
				break;
		}
	}
		loop++;
	}
	return (s);
}

