#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: head
 * Return: it returns the number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
