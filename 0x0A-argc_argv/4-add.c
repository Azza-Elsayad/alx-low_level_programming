#include <stdio.h>
#include <stdlib.h>
/**
*main - Adds args
*@argc: size of argv arry
*@argv: pointer to arry of string
*Return: 0
*/
int main(int argc, char *argv[])
{
int sum = 0;
int i = 1;
int j = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
else
{
for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (argv[i][j] < '0' || argv[i][j] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			
		}
	}sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
return (1);
}
