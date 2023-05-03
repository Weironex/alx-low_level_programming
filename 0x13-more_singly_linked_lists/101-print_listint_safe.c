#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 0;

	tortoise = head;
	hare = head;

	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			count++;
			break;
		}
	}

	if (hare == NULL || hare->next == NULL)
	{
		while (tortoise != NULL)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			count++;
			tortoise = tortoise->next;
		}
	}

	return (count);
}
