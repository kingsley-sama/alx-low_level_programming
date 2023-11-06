#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new instance of the dog struct
 * @name: the name of the dog instance
 * @age: the age of the dog instance
 * @owner: the owner of the dog instance
 * Return: a pointer to the new dog instance, or NULL if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = malloc(sizeof(dog_t));

	if (p != NULL)
	{
		p->name = strdup(name);
		p->owner = strdup(owner);

		if (p->name == NULL || p->owner == NULL)
		{
			free(p->name);
			free(p->owner);
			free(p);
			return (NULL);
		}

		p->age = age;
		return (p);
	}

	return (NULL);
}
