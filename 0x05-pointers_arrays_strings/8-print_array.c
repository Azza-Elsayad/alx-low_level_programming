#include "main.h"
/**
 *print_array - print half string
 *@a: pointer point to array
 *@n: length of array
 *Return 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d\, ", a[i]);
	}
	_putchar('\n');
}

