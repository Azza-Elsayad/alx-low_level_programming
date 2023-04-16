#include <stdlib.h>
#include "main.h"
/**
**_calloc - allocates memory for an array.
*@nmemb: legnth of array
*@size: size of memory to be allocated
*Return: a pointer to the allocated memory of the array.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int  i;
char *p;
if (nmemb == 0 || size == 0)
	return (NULL);
p = malloc(nmemb * size);
for (i = 0; i < nmemb; i++)
	p[i] = 0;
if (p == NULL)
	return (NULL);
return (p);
}
