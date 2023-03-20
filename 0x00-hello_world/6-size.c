#include <stdio.h>

/**
 * main - main block getting size
 * Return: 0
 */

int main(void)
{
	int i;
	char c;
	float f;
	long int l;
	long long int ll;

	printf("Size of a char: %i byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long: int %i byte(s)\n", sizeof(l));
	printf("Size of a long: long int %i byte(s)\n", sizeof(ll));
	printf("Size of a float: %i byte(s)\n", sizeof(f));
	return (0);
}
