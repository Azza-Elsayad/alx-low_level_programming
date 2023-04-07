 #include "main.h"
/**
 *rev_string - print string in revers
 *@s: the pointer that poiint to the first element of the string
 *Return: string
 **/
void rev_string(char *s)
{
	int i;
	int n;

	for (i = 0 ; s[i] != '\0'; i++)
	{
	}
	for (n = i - 1 / 2; n >= 0 ; n--)
	{
		_putchar(s[n]);
	}
}
