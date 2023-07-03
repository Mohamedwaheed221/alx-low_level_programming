#include "main.h"

/**
*print_chessboard - a function that prints the chessboard.
*@a: array containing board elements
*returns nothing
*/

void print_chessboard(char (*a)[8])
{
	int l, y;

	for (l = 0; a[l][7]; l++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[l][y]);
		_putchar('\n');
	}

}
