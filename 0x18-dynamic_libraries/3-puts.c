#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: string to print
 */

void _puts(char *str)
{
	int initial = 0;

	while (*(str + initial) != '\0')
	{
		putchar(*(str + initial));
		initial++;
	}
	putchar(10);
}
