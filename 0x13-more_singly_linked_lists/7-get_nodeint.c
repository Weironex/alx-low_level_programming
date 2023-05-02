#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head node of the list.
 * @index: Index of the node to be returned (starting from 0).
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
  listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);

                count++;
		current = current->next;
	}

	return (NULL);
}
