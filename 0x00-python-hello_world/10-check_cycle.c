#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - it checks if a singly linked list contain a cycle
 * @list: a singly linked list
 * return: 0 if their is no cycle, 1 otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *car, *plane;

	if (list == NULL || list->next == NULL)
		return (0);
	car = list->next;
	plane = list->next->next;

	while (car && plane && plane->next)
	{
		if (car == plane)
			return (1);
		car = car->next;
		plane = plane->next->next;
	}
	return (0);

}
