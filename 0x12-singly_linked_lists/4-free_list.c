#include "lists.h"

/**
 * free_list - entry point
 * @head: Is the parameter to be checked
 *
 * Description: write a function that frees a list_t list.
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *fr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		fr = head->next;
		free(head->str);
		free(head);
		head = fr;
	}
}
