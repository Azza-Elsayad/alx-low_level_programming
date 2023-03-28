#include "main.h"
/**
 * _strlen - get the legnth of the string
 *@s: char
 *Return: int
 **/
 int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
