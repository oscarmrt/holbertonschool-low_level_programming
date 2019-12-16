#include "lists.h"

/**
 * free_listint - entry point
 * @head: Is the parameter to be checked
 *
 * Description: write a function that frees a listint_t list.
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *fr;

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
