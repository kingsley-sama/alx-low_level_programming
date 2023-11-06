#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new instance of the dog struc
 * @name: the name of the dog instance
 * @age: the age of the dog instance
 * @owner: the owner of the dog instance
 * Return: 0 if success , NULL if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t my_dog;

	dog_t *p = malloc(sizeof(my_dog));

	if (p)
	{
		p->age = age;
		p->name = name;
		p->owner = owner;
		return (p);
	}
	return (NULL);
}
