#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size parameter of triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int incl, inc2;
	
	for (inc1 = 0; inc1 < size; inc1++)
	{
		for ((inc2 = 1; inc1 < (size -inc1); inc2++)
				_putchar(' ');
			for (inc2--; inc2 < size; inc2++)
				_putchar('#');
			if (inc1 < (size - inc1))
			_putchar('\n');
	}
	_putchar('\n');
}
