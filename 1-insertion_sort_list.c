#include "sort.h"

/**
 * insertion_sort_list - Sort doubly linked list using insertion sort
 * @list: Pointer to doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = *list;
	listint_t *curr,  *search;

	/* start from index 1 as first element is assumed as sorted */
	curr = head->next;

	if (head == NULL || head->next == NULL || list == NULL)
		return;

	while (curr != NULL)
	{
		/* search is element in list (sorted part) */
		search = curr->prev;

		while (search != NULL && search->n > curr->n)
		{
			search->next = curr->next;

			if (curr->next != NULL)
				curr->next->prev = search;

			curr->prev = search->prev;
			curr->next = search;

			if (search->prev != NULL)
				search->prev->next = curr;
			else
				*list = curr;
			search->prev = curr;
			print_list(*list);

			search = curr->prev;
		}
		curr = curr->next;
	}
}
