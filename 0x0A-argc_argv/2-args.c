#include <stdio.h>
/**
*main - print args
*@argc: cont of arg
*@argv: pointer to arry of string
*Return: 0
*/
int main(int argc, char *argv[])
{
int i = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
