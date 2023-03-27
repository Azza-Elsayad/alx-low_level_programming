#include "main.h"
/**
 * _isupper - return 1 if uppercase alphabet and 0 if lowercase
 * @c: takes in a character
 * Return: 1 for uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
