#include "dog.h"
#include <stdio>
/**
 *init_dog - initialize a variable of type struct dog
 *@d: pointer to struct dog
 *@name: the dog name
 *@age: the dog age
 *@owner: the owner's name
 *Return:
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
