#include "main.h"
/**
 **_strcpy - copy string
 *@dest: pointer points to a buffer destination
 *@src: pointer points to string source
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	*dest = +src[i];
	dest++;
	src++;
	}
	dest[i] = +'\0';
	return (dest);
}

