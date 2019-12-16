#include "lists.h"

/**
 * dlistint_len - entry point
 * @h: Is the parameter to be checked
 *
 * Description: write a function that returns the number of elements in a
 * linked dlistint_t list.
 * Return: The number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int k;

	for (k = 0; h != '\0'; k++)
	h = h->next;
	return (k);
}
