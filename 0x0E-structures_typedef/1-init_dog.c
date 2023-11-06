#include <stdio.h>
#include "dog.h"
/**
 * init_dog - this function initializes a
 * struct dog
 * @d: this is a pointer to the dog structure
 * @name: this is the address to the string name of the dog
 * @age: this is the address to the float age of the dog
 * @owner: this is the address of string owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
