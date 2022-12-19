#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: 0.
 */
void puts_half(char *str)
{
	int length= 0, initial;

	while (length >= 0)
	{
		if (str[length] == '\0')
			break;
		length++;
	}

	if (length % 2 == 1)
		initial = length / 2;
	else
		initial = (length - 1) / 2;
	for (initial++; initial < length; initial++)
		putchar(str[initial]);
	putchar('\n');
}

