#include "lists.h"

/**
 * get_dnodeint_at_index - entry point
 * @head: Is the parameter to be checked
 * @index: Is the parameter to be checked
 *
 * Description: write a function that returns the nth node of
 * a dlistint_t linked list.
 * Return: the nth node.
 */
dlistint_t *get_nodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *prov;

	prov = head;

	for (; index > 0; index--)
	{
		if (prov == NULL)
			return (NULL);
		prov = prov->next;
	}
	return (prov);
}
