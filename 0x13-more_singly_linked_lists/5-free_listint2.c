
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: A pointer to the address of  head of the listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_list;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp_list = (*head)->next;
		free(*head);
		*head = tmp_list;
	}

	head = NULL;
}
/*
 * Author: Agure
 *
 */
