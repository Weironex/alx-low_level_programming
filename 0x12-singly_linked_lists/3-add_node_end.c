#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * _strlen - Finds the length of a string
 * @str: String to find the length of
 *
 * Return: Length of string
 */

unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}


/**
 * add_node_end - Add a new node at the end of linked list
 * @head: Double pointer to a linked list
 * @str: String to add to the new node
 *
 * Return: Address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp2;

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);

	}
	temp->len = _strlen(temp->str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp2 = *head;
	while (temp2->next)
		temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
