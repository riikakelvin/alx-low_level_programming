#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - nitialize a variable of type struct dog
 * @name: name of subject
 * @age:age of subject
 * @owner: dog owner
 * @d: pointer to the struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
