#include "sort.h"

/**
 * swapNodes - Function that Swaps two nodes in a listint_t doubly-linked list.
 * @h: Pointer to the head of the doubly-linked list.
 * @n_1: Pointer to the first node to swap.
 * @n_2: The second node to swap.
 */
void swapNodes(listint_t **h, listint_t **n_1, listint_t *n_2)
{
	(*n_1)->next = n_2->next;
	if (n_2->next != NULL)
		n_2->next->prev = *n_1;
	n_2->prev = (*n_1)->prev;
	n_2->next = *n_1;
	if ((*n_1)->prev != NULL)
		(*n_1)->prev->next = n_2;
	else
		*h = n_2;
	(*n_1)->prev = n_2;
	*n_1 = n_2->prev;
}

/**
 * insertion_sort_list - A function that Sorts a doubly linked list of
 *                       integers using the insertion sort algorithm.
 * @list: Pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insrt, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = temp)
	{
		temp = iter->next;
		insrt = iter->prev;
		while (insrt != NULL && iter->n < insrt->n)
		{
			swapNodes(list, &insrt, iter);
			print_list((const listint_t *)*list);
		}
	}
}
