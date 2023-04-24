#include "variadic_functions.h"
/*
*sum_them_all - function to sum its parameters.
*@n: count of args.
*Return: sum , 0 if n = 0;
*/
int sum_them_all(const unsigned int n, ...)
{
int i;
int sum = 0;

va_list p;
va_start(p, n);
if (n == 0)
	return (0);
for (i = 0; i < n; i++)
	sum += va_arg(p, int);
va_end(p);
return (sum);
}
