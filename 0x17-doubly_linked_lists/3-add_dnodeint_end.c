#include "lists.h"
/**
 * add_dnodeint_end - entry point
 * @head: Is the parameter to be checked
 * @n: Is the parameter to be checked
 * Description: write a function that adds a new node at the end of a
 * dlistint_t list.
 *
 * Return: The adress of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn;
	dlistint_t *t;
	int l;

	t = *head;
	if (head == NULL)
		return (NULL);
	nn = malloc(sizeof(dlistint_t));
	if (nn == NULL)
		return (NULL);
	nn->n = n;
	if (*head == NULL)
	{
		nn->next = NULL;
		nn->prev = NULL;
		*head = nn;
	}
	else
	{
		for (l = 0; t->next != NULL; l++)
			t = t->next;
		nn->next = NULL;
		nn->prev = t;
		t->next = nn;
	}
	return (nn);
}
