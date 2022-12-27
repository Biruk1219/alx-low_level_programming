#include "main.h"
#include <stdio.h>

/**
 *cap_string - capitalizes all words of a string
 *@s: input string.
 *Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int loop = 0, x;

	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + loop) >= 97 && *(s + loop) <= 122)
	*(s + loop) = *(s + loop) - 32;
	loop++;
	while (*(s + loop) != '\0')
	{
		for (x = 0; x < 13; x++)
	{
		if (*(s + loop) == sep_words[x])
	{
		if ((*(s + (loop + 1)) >= 97) && (*(s + (loop + 1)) <= 122))
		*(s + (loop + 1)) = *(s + (loop + 1)) - 32;
		break;
	}
	}
		loop++;
	}
	return (s);
}

