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
if (argc == 1)
{
printf("0\n");
return (0);
}

else
{
/*while(isdigit argv[i] == true)*/

for (i = 1; i < argc; i++)
{
	if (*argv[i] < '0' || *argv[i] >'9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
sum += atoi(argv[i]);
			}		
}
}

printf("%d\n", sum);

return (1);
}
