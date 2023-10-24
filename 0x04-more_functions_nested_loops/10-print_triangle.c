#include "main.h"

/**
 * print_triangle - entry point
 * Description: i prints diagonals
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, hash, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = 0; space < size - row - 1; space++)
			{
				_putchar(' ');
			}
			for (hash = 0; hash < row + 1; hash++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
