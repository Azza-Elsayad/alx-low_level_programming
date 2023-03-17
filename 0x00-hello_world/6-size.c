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

	printf("Size of a char %c byte(s)\n", sizeof(c));
	printf("Size of an int %d byte(s)\n", sizeof(i));
	printf("Size of a long int %ld byte(s)\n", sizeof(l));
	printf("Size of a long long int %lld byte(s)\n", sizeof(ll));
	printf("Size of a float %f byte(s)\n", sizeof(f));
	return (0);
}

