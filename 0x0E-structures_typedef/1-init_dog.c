#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * int_dog - check the code
 *@d: pointer
 *@name: dogname
 *@age: dogage
 *@owner: dogowner
 *Return: zero
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
