#ifndef MACRO_H
#define MACRO_H
/**
 * struct dog - a structure representing a dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
