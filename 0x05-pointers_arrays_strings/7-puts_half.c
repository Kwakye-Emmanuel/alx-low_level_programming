#include "main.h"

/**
*puts_half - a function that prints half of a string
*when odd len, n = (length_of_the_string - 1) / 2
*@str: input
*Return: half of input
*/
void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len -1) / 2 + 1; i < len; i++)
			putchar(*(str + 1));
			putchar(10);
			}

			/**
			 * _strlen -returns the length of a string
			 * @s: string
			 *
			 * Return: the length of the given string
			 */

			int _strlen(char *s)
			{
			int len = 0;

			while(*(s + len) != '\0')
			len++;

			return (len);
			}
