#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list.
 * @h: Pointer to the beginning of the list.
 *
 * Return: The number of nodes in the list.
 */
 
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            _printf("[0] (nil)\n");
        else
            _printf("[%d] %s\n", h->len, h->str);

        count++;
        h = h->next;
    }

    return (count);
}