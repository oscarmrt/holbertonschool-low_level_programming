#include<stdio.h>
#include"dog.h"
/**
 * free_dog - Short description
 * @d: First member
 *
 * Description: Longer description
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
