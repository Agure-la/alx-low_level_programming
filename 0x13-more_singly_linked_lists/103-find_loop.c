#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *list_1, *list_2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	list_1 = head->next;
	list_2 = (head->next)->next;

	while (lsit_2)
	{
		if (list_1 == list_2)
		{
			list_1 = head;

			while (list_1 != list_2)
			{
				list_1 = list_1->next;
				list_2 = list_2->next;
			}

			return (list_1);
		}

		list_1 = list_1->next;
		list_2 = (list_2->next)->next;
	}

	return (NULL);
}
