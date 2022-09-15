#include <stdio.h>
#include "main.h"

/**
 *print_straightline - function that prints a straight line
*@n: variable
*/
void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
