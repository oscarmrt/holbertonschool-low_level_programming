#include<stdio.h>
#include"dog.h"
/**
 * init_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * @d: Fourth member
 *
 * Description: Longer description
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
