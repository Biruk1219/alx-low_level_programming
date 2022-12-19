#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: 0.
 */
void print_array(int *a, int n)
{
	int initial = 0;

	for (; initial < n; initial++)
	{
		printf("%d", *(a + initial));
		if (initial != (n - 1))
			printf(", ");
	}
	printf("\n");
}

