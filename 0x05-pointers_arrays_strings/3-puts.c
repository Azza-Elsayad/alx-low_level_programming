#include "main.h"
/**
 *_puts - print string
 *@str: the pointer that poiint to the first element of the string
 *Return: striing
 **/
void _puts(char *str)
{
	int i;

	for (i = 0 ; *(str + i) != '\0'; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
