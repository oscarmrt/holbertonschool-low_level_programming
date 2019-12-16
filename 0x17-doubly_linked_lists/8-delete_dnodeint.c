#include "lists.h"

/**
 * delete_dnodeint_at_index - entry point
 * @head: Is the parameter to be checked
 * @index: Is the parameter to be checked
 *
 * Description: write a function that deletes the node at index of a
 * dlistint_t linked list
 * Return: 1 is succeedded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t;
	dlistint_t *n;

	if (*head == NULL)
		return (-1);
	t = *head;
	if (index == 0)
	{
		t = t->next;
		free(*head);
		*head = t;
	}
	else
	{
		for (; index - 1 > 0; index--)
		{
		if (t->next == NULL)
			return (-1);
		t = t->next;
		}
		n = t;
		n = n->next->next;
		free(t->next);
		t->next = n;
	}
	return (1);
}
