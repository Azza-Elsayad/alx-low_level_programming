#include <stdlib.h>
#include "main.h"
/**
**string_nconcat - concatenates two strings.
*@s1: pointer pointed to string 1
*@s2: pointer pointed to string 2
*@n: max legnth of s2 string
*Return: a pointer to the allocated memory of the concatenat string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int l1 = 0, l2 = 0, i, j;
char *p;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (i = 0; s1[i] != '\0'; i++)
	l1++;
for (j = 0; s2[j] != '\0' && j < n; j++)
	l2++;
p = malloc(sizeof(char) * (l1 + l2 + 1));
if (p == NULL)
	return (NULL);
for (i = 0; s1[i] != '\0'; i++)
	p[i] = s1[i];
for (j = 0; s2[j] != '\0' && j < n; j++)
	p[i + j] = s2[j];
	p[i + j] = '\0';
	return (p);
}
