#include "lists.h"

/**
 * get_nodeint_at_index - return given node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate
 * Return: If the node does not exist retun  NULL.else return the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n_node;

	for (n_node = 0; n_node < index; n_node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
