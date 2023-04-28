#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @index: The index of the node to be deleted.
 * On success return 1 else -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp_list, *copy = *head;
	unsigned int new_node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (new_node = 0; new_node < (index - 1); new_node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp_list = copy->next;
	copy->next = tmp_list->next;
	free(tmp_list);
	return (1);
}
