#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */

void print_diagsums(int *a, int size)
{
	int initial, s1 = 0, s2 = 0;

	for (initial = 0; initial < (size * size); initial++)
	{
		if (initial % (size + 1) == 0)
		s1 += *(a + initial);
		if (initial % (size - 1) == 0 && initial != 0 && initial < size * size - 1)
		s2 += *(a + initial);
	}
	printf("%d, %d\n", s1, s2);
}

