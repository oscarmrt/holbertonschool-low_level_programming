#include "lists.h"

/**
 * print_dlistint - entry point
 * @h: Is the parameter to be checked
 *
 * Description: write a function that prints all the elements of a
 * dlistint_t list.
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int k;

	for (k = 0; h != '\0'; k++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (k);
}
