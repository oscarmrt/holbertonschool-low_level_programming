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
 * add_node_end - entry point
 * @head: Is the parameter to be checked
 * @str: Is the parameter to be checked
 * Description: write a function that adds a new node at the end of a
 * list_t list.
 *
 * Return: The adress of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn;
	list_t *t;
	int l;

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);
	nn->str = strdup(str);
	nn->len = _strlen((char *)str);
	nn->next = NULL;
	t = *head;
	if (*head == NULL)
		*head = nn;
	else
	{
		for (l = 0; t->next != NULL; l++)
			t = t->next;
		t->next = nn;
	}
		return (nn);
}
