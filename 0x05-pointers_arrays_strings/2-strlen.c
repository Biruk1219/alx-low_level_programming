#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int word_length = 0;

	while (*(s + word_length) != '\0')
		++word_length;
	return (word_length);
}
