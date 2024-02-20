#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @head: A pointer to the head of the doubly-linked list.
 * @a: A pointer to the first node to swap.
 * @b: The second node to swap.
 */
void swap_nodes(listint_t **head, listint_t **a, listint_t *b)
{
	(*a)->next = b->next;
	if (b->next != NULL)
		b->next->prev = *a;
	b->prev = (*a)->prev;
	b->next = *a;
	if ((*a)->prev != NULL)
		(*a)->prev->next = b;
	else
		*head = b;
	(*a)->prev = b;
	*a = b->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *value, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (value = (*list)->next; value != NULL; value = temp)
	{
		temp = value->next;
		insert = value->prev;
		while (insert != NULL && value->n < insert->n)
		{
			swap_nodes(list, &insert, value);
			print_list((const listint_t *)*list);
		}
	}
}
