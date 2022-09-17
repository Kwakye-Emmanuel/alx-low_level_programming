#include <stdio.h>
/**
* main - prints alphabet in reverse.
*
* Return: 0 on success
*/
int main(void)
{
char c = 'z';

while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
