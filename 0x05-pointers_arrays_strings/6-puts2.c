#include "main.h"
/**
 *puts2 - prints every other letter in the string
 *@str: to check.
 *Returne 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
