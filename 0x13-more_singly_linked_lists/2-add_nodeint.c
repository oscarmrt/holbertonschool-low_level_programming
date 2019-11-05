#include "lists.h"
/**
 * add_nodeint - entry point
 * @head: Is the parameter to be checked
 * @n: Is the parameter to be checked
 * Description: write a function that adds a new node at the beginning of
 * a listint_t list.
 *
 * Return: The adress of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;

	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);
	nn->n = n;
	nn->next = *head;
	*head = nn;
	return (nn);
}
