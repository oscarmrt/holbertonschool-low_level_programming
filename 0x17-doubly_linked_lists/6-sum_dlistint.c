#include "lists.h"

/**
 * sum_dlistint - entry point
 * @head: Is the parameter to be checked
 *
 * Description: write a function that returns the sum of all the
 * data (n) of a dlistint_t linked list.
 * Return: the sum.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *prov = head;
	int s;

	if (head == NULL)
		return (0);
	for (s = 0; prov != NULL;)
	{
		s = s + prov->n;
		prov = prov->next;
	}
	return (s);
}
