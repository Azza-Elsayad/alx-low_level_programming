#include "main.h"

/**
*isdigit - check c is digit or not
*@c: take char
*Return: 0 if c is digit, 1 otherwise.
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
