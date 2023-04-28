
#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of element in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list(first element in list).
 *
 * Return: The number of elements in the listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h)
	{
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}
/*
 * Author: Agure
 *
 */
