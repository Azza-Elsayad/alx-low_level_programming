#include "main.h"
/**
 *puts_half - print half string
 *@str: char to print half
 *Return 0
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	for (j = i - 1 / 2 ; j < i ; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

