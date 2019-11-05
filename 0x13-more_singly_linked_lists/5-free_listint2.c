#include "lists.h"

/**
 * free_listint2 - entry point
 * @head: Is the parameter to be checked
 *
 * Description: write a function that frees a listint_t list.
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *fr;

	if (head == NULL)
		return;

	fr = *head;

	while (fr != NULL)
	{
		fr = fr->next;
		free(*head);
		*head = fr;
	}
	*head = NULL;
}
