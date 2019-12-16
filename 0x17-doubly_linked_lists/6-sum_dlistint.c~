#include "lists.h"

/**
 * sum_listint - entry point
 * @head: Is the parameter to be checked
 *
 * Description: write a function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * Return: the sum.
 */
int sum_listint(listint_t *head)
{
	listint_t *prov = head;
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
