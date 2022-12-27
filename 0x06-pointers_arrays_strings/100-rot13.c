#include "main.h"
#include <stdio.h>

/**
 *rot13 - encodes a string using rot13
 *@s: input string.
 *Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int loop = 0, x;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + loop) != '\0')
	{
		for (x = 0; x < 52; x++)
		{
			if (*(s + loop) == alphabet[x])
			{
				*(s + loop) = rot13[x];
					break;
			}
		}
		loop++;
	}
	return (s);
}

