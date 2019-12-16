#include "lists.h"
/**
 * add_dnodeint - entry point
 * @head: Is the parameter to be checked
 * @n: Is the parameter to be checked
 * Description: write a function that adds a new node at the beginning of
 * a dlistint_t list.
 *
 * Return: The adress of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn;

	nn = malloc(sizeof(dlistint_t));
	if (nn == NULL)
		return (NULL);
	nn->n = n;
	nn->next = *head;
	*head = nn;
	return (nn);
}
