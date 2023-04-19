#ifndef DOG
#define DOG
/**
 *struct dog - dog data
 *@name: name of dog
 *@age: its age
 *@owner: name of its owner
 *Descrebtion: dog data
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} mydog;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

