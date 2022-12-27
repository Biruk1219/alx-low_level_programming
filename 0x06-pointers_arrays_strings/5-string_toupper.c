#include "main.h"
#include <stdio.h>

/**
 *string_toupper - changes all lowercase letters of a string
 *to uppercase
 *@s: input string.
 *Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int loop = 0;

	while (*(s + loop) != '\0')
	{
		if ((*(s + loop) >= 97) && (*(s + loop) <= 122))
		*(s + loop) = *(s + loop) - 32;
		loop++;
	}
	return (s);
}

