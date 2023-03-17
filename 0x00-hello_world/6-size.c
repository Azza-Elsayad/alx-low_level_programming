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

	printf("Size of an int %d byte(s)", sizeof(i));
	printf("Size of a char %c byte(s)", sizeof(c));
	printf("Size of a float %f byte(s)", sizeof(f));
	printf("Size of a long int %ld byte(s)", sizeof(l));
	printf("Size of a long long int %lld byte(s)", sizeof(ll));
	return (0);
}

