#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */

void print_chessboard(char (*a)[8])
{
	int initial, x = 0;

	for (initial = 0; initial < 64; initial++)
	{
		if (initial % 8 == 0 && initial != 0)
		{
			x = initial;
			_putchar('\n');
		}
		_putchar(a[initial / 8][initial - x]);
	}
	_putchar('\n');
}

