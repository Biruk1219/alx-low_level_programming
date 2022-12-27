#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int a, b, loop;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}

	b = a;
	loop = 1;

	while (b > 9)
	{
		b /= 10;
		loop *= 10;
	}

	for (; loop >= 1; loop /= 10)
	{
		_putchar(((a / loop) % 10) + 48);
	}
}

