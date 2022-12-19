#include "main.h"
#include <stdio.h>


/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: 0.
 */

void puts2(char *str)
{
	int initial = 0;

	while (*(str + initial) != '\0')
	{
		if (initial % 2 == 0)
			putchar(*(str + initial));
		initial++;
	}
	putchar(10);
}

