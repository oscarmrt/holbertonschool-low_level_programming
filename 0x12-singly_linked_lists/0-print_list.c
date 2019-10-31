#include "lists.h"

/**
 * print_list - entry point
 * @h: Is the parameter to be checked
 *
 * Description: write a function that prints all the elements of a list_t list.
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	int k;

	for (k = 0; h != '\0'; k++)
	{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	}
	return (k);
}
