#include "lists.h"

/*
 * insert_nodeint_at_index - Inserts a new node to a listint_t list at a given position.
 * @head: A pointer to the address of the head of the listint_t list.
 * @idx: The index of the listint_t list where the new node should be added.
 * @n: The integer for the new node to contain.
 * Return: If the function fails return  NULL. else return the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_list, *copy = *head;
	unsigned int new_node;

	new_list = malloc(sizeof(listint_t));
	if (new_list == NULL)
		return (NULL);

	new_list->n = n;

	if (idx == 0)
	{
		new_list->next = copy;
		*head = new_list;
		return (new_list);
	}

	for (new_node = 0; new_node < (idx - 1); new_node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new_list->next = copy->next;
	copy->next = new_list;

	return (new_list);
}
/*
 * Author: Agure
 *
 */
