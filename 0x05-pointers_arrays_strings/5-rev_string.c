#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a strxng.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int length = 0, x, y;
	char *str, temp;

	while (length > -1)
	{
		if (s[length] == '\0')
			break;
		length++;
	}
	str = s;

	for (x = 0; x < (length - 1); x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			tmp = *(str + y);
			*(str + y) = *(str + (y - 1));
			*(str + (y - 1)) = tmp;
		}
	}
}

