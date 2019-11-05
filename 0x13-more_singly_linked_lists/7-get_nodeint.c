#include "lists.h"

/**
 * get_nodeint_at_index - entry point
 * @head: Is the parameter to be checked
 * @index: Is the parameter to be checked
 *
 * Description: write a function that returns the nth node of
 * a listint_t linked list.
 * Return: the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *prov;

	prov = head;

	for (; index > 0; index--)
	{
		if (prov == NULL)
			return (NULL);
		prov = prov->next;
	}
	return (prov);
}
