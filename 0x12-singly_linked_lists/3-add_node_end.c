#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int length;
	list_t *new_str, *last;

	new_str = malloc(sizeof(list_t));
	if (new_str == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new_str);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new_str->str = dup;
	new_str->length = length;
	new_str->next = NULL;

	if (*head == NULL)
		*head = new_str;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_str;
	}

	return (*head);
}
/*
 * Author: Agure
 *
 */
