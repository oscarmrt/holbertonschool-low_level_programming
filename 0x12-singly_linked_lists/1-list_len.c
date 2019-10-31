#include "lists.h"

/**
 * list_len - entry point
 * @h: Is the parameter to be checked
 *
 * Description: write a function that returns the number of elements in a
 * linked list_t list.
 * Return: The number of elements.
 */
size_t list_len(const list_t *h)
{
	int k;

	for (k = 0; h != '\0'; k++)
	h = h->next;
	return (k);
}
