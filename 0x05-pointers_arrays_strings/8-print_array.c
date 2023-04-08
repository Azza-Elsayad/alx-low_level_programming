#include "main.h"
/**
 *print_array - print half string
 *@a: pointer point to array
 @n: length of array 
 *Return 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] < n; i++)
	{
		_putchar(n[i], ' ');
	}
	
	_putchar('\n');
}

