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

	for(i = 0 ; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		s++;
	}
	_putchar('\n');
	for (n = i ; n > 0 ; n--)
	{
		_putchar(s[n]);
		s--;
	}
	 
}
