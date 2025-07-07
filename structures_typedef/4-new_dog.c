#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: Null is function fails
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *n, *o;
	int i = 0, j = 0;

	while (name[i])
	{
		i++;
	}
	while (owner[j])
	{
		j++;
	}
	n = malloc(i + 1);
	o = malloc(j + 1);
	dog = malloc(sizeof(dog_t));
	if (!n || !o || !dog)
	{
		free(n);
		free(o);
		free(dog);
		return (NULL);
	}
	i = 0;
	while (name[i])
	{
		n[i] = name[i];
		i++;
	}
	n[i] = '\0';
	j = 0;
	while (owner[j])
	{
		o[j] = owner[j];
		j++;
	}
	o[j] = '\0';
	dog->name = n;
	dog->age = age;
	dog->owner = o;
	return (dog);
}
