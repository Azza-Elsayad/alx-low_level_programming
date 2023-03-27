#include "main.h"
/**
 *swap_int - swaps tow int
 *@a: first int
 *@b: 2nd int
 *Return: 2 int was swapped.
 **/

void swap_int(int *a, int *b)
{
	int x = *b;

	*b = *a;
	*a = x;
}
