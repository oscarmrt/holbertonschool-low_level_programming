#include "lists.h"

/**
 * free_dlistint - entry point
 * @head: Is the parameter to be checked
 *
 * Description: write a function that frees a dlistint_t list.
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *fr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		fr = head;
		head = head->next;
		free(fr);
	}
	free(head);
}
