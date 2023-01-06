#include "main.h"

/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	unsigned int initial = 0;

	for (; *(s + initial) != '\0'; initial++)
	if (*(s + initial) == c)
	return (s + initial);
	if (*(s + initial) == c)
	return (s + initial);
	return ('\0');
}

