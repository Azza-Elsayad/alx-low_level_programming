 #include "main.h"
/**
 *print_rev - print string in revers
 *@s: the pointer that poiint to the first element of the string
 *Return: string
 **/
void print_rev(char *s)
{
	int i;
for (i = 0 ; *(s + i) != '\0'; i++)
	{
	}
	for (i = i - 1 ; *(s - i) != '\0'; i--)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
}
