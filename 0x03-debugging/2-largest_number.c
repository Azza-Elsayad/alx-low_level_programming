#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (b < c)
	{
		if (c < a)
		{
		largest = a;
		}
		else
		{
		largest = c;
		}
	}
	else if (b < a)
	{
	largest = a;
	}
	else
	}
	largest = b;
	}
return (largest);
}
