#include "lists.h"
/**
 * _strlen - entry point
 * @c: Is the parameter to be checked
 *
 * Description: write a function that returns the lenght of a string
 * Return: lenght of a string
 */
int _strlen(char *c)
{
	int k;

	for (k = 0; c[k] != '\0'; k++)
		;
	return (k);
}

/**
 * add_node - entry point
 * @head: Is the parameter to be checked
 * @str: Is the parameter to be checked
 * Description: write a function that adds a new node at the beginning of
 * a list_t list.
 *
 * Return: The adress of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);
	nn->str = strdup(str);
	nn->len = _strlen((char *)str);
	nn->next = *head;
	*head = nn;
	return (nn);
}
