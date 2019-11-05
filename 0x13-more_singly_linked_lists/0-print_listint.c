#include "lists.h"

/**
 * print_listint - entry point
 * @h: Is the parameter to be checked
 *
 * Description: write a function that prints all the elements of a
 * listint_t list.
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int k;

	for (k = 0; h != '\0'; k++)
	{
		printf("[%d]\n", h->n);
		h = h->next;
	}
	return (k);
}
