#include <stdio.h>

/**
 * main - print all single digit numbers using putchar, followed by a newline
 *
 * Return: always 0
 */

int main(void)
{
int digit = 0;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}
putchar('\n');

return (0);
}
