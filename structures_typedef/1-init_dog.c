#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: string
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
