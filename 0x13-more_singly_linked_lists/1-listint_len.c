#include "lists.h"

/**
 * listint_len - returns the amount of elements in a linked list
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		num_of_nodes++;
		h = h->next;
	}

	return (num_of_nodes);
}
