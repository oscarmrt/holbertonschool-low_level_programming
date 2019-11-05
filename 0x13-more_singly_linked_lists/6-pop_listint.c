#include "lists.h"

/**
 * pop_listint - entry point
 * @head: Is the parameter to be checked
 *
 * Description: write a function that deletes the head node of
 * a listint_t linked list, and returns the head node's data (n).
 * Return: If the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	int del;

	if (*head == NULL)
		return (0);
	del = (*head)->n;
	free(*head);
	*head = (*head)->next;
	return (del);
}
