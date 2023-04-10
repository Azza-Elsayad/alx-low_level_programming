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
if (argc < 2)
{
printf("1\n");
}

else
{
/*while(isdigit argv[i] == true)*/

for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
}

printf("%d\n", sum);

return (1);
}
