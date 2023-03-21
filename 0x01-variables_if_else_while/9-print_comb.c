#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: always 0
 */

int main(void)
{
int x = 0;

for (x = '0'; x <= '9'; x++)
{
putchar(x);
if (x != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
