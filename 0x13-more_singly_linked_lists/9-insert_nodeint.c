#include "lists.h"

/**
 * insert_nodeint_at_index - entry point
 * @head: Is the parameter to be checked
 * @idx: Is the parameter to be checked
 * @n: Is the parameter to be checked
 *
 * Description: write a function that inserts a new node at a given position
 * Return: the adress of the new node, or NULL if it failed..
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prov;
	listint_t *hcp;
	unsigned int k;

	hcp = *head;
	prov = malloc(sizeof(listint_t));
	if (prov == NULL)
		return (NULL);
	prov->n = n;
	if (idx == 0)
	{
		prov->next = hcp;
		*head = prov;
		return (prov);
	}

	for (k = 0; k < idx - 1; k++)
	{
		if (hcp == NULL)
		{
			free(prov);
			return (NULL);
		}
		hcp = hcp->next;
	}
	prov->next = hcp->next;
	hcp->next = prov;
	return (prov);
}
