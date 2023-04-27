#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added at the start of the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int length;
	list_t *new_list;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new_list);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new_list->str = dup;
	new_list->length = length;
	new_list->next = *head;

	*head = new_list;

	return (new_list);
}
/*
 * Author: Agure
 *
 */
