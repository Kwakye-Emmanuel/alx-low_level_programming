#include <stdio.h>
/**
* main - prints all possible Combinations of single digit numbers.
* Return: 0 Always
*/
int main(void)
{
int i = '0';

while (i <= '9')
{
putchar(i);
if(i != '9')
{
putchar(',');
putchar(' ');
}
++i;
}
putchar('\n');
return (0);
}
