#include <string.h>
#include "main.h"
/**
*_strcat -  function concatenates two strings
*@dest: pointer to first string
*@src: pointer to secound string
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
int l1 = strlen(dest);
int l2 = strlen(src);
int i = 0;

for (i = 0 ; i < l2; i++)
	{
	dest[l1 + i] = src[i]
	}
return (dest);
}
