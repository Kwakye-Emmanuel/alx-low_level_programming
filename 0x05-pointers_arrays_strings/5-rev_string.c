#include "main.h"

/**
*rev_string - a function that reverses a string
*@s: input to reverse
*Return: string and in reverse
*/

void rev_string(char *s)
{
char rev = s[0];
int lcounter = 0;
int i;

while (s[lcounter] != '\0')
lcounter++;
for (i = 0; i < lcounter; i++)
{
lcounter--;
rev = s[i];
s[i] = s[lcounter];
s[lcounter] = rev;
}
}
