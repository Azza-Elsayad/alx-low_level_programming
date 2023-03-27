#include "main.h"

/**
*_isdigit - check c is digit or not
*@c: takes char
*Return: 1 if c is digit, 0 otherwise.
*/
int _isdigit(int c)
{
	if (c <= '0' && c >= '9')

	{
		return (1);
	}
	else
	{
		return (0);
	}
}
