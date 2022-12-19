#include "main.h"
#include <string.h> /*String.h header file provide strlen()*/
#include <stdio.h>

/**
 * print_rev - prints a string in reverse form
 * @s: String variable to reverse
 * Return: 0.
 */

void print_rev(char *s)
{
	int length = strlen(s);/*length variable hold string length value of s*/ 

	while (length--)
		putchar(*(s + length));
	putchar(10);
}

