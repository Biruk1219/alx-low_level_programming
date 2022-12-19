#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int length = 0, size = 0, oi = 0, pn = 1, m = 1, initial;

	while (*(s + length) != '\0')
	{
		if (size > 0 && (*(s + length) < '0' || *(s + length) > '9'))
			break;

		if (*(s + length) == '-')
			pn *= -1;

		if ((*(s + length) >= '0') && (*(s + length) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		length++;
	}

	for (initial = length - size; initial < length; initial++)
	{
		oi = oi + ((*(s + initial) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}

