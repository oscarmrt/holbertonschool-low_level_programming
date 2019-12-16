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

	if (*head == NULL)
	{
		nn->next = NULL;
		nn->prev = NULL;
		*head = nn;
	}
	else
	{
		while ((*head)->prev != NULL)
			(*head) = (*head)->prev;
		(*head)->prev = nn;
		nn->next = *head;
		nn->prev = NULL;
		*head = nn;
	}
	return (*head);
}
