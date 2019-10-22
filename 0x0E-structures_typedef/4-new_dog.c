#include<stdio.h>
#include"dog.h"
#include <stdlib.h>
/**
 * *new_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}

/**
 * _strlen - Entry point
 *
 * Description: write a function that returns the length of a string
 * @s: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
	{
	}
	return (a);
}

/**
 * *_strcpy - Entry point
 *
 * Description: write a function that copies the string pointed to by src
 * @dest: Is the parameter to be checked
 * @src: Is the parameter to be checked
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int d = 0;

	while (src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
