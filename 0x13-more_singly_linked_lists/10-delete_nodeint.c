#include "lists.h"

/**
 * delete_nodeint_at_index - entry point
 * @head: Is the parameter to be checked
 * @index: Is the parameter to be checked
 *
 * Description: write a function that deletes the node at index of a
 * listint_t linked list
 * Return: 1 is succeedded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t;
	listint_t *n;

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
