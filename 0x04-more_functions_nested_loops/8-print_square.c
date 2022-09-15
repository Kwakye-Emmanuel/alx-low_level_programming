#include <stdio.h>
#include "main.h"

/**
 * print_square - prints square
 * @size: parameter
 * Return: 0
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < (size -1); y++)
			{
				for (y = 0; y < (size - 1); y++)
					putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else 
	{
		putchar('\n');
	}
}
