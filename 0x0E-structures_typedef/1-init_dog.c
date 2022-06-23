#include "dog.h"
/**
 * init_dog - create a dog from input
 * @d: dog structure
 * @name: name
 * @age: age
 * @owner: owner
 * Return: void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
