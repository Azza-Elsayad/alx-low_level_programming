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
	char string;

	for (i = 0; src[i] != '\0'; i++)
	{
	string = +src[i];
	}
	string = +'\0';
	*dest = string;
	return (dest);
}

