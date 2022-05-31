#include "lists.h"
/**
* check_cycle - check if cycle found in list
* @list: head pointer
* Return: 1 if cycle found else 0
*/
int check_cycle(listint_t *list)
{
	listint_t *first, *second;

	if (!list)
		return (0);
	first = list;
	second = list;
	while (1)
	{
		if (first->next && first->next->next &&
			first->next->next->next && first->next->next->next->next)
			/*
			* if cycle in loop , we can have any number of nodes
			*  I choose to move first node by 4
			*/
		{
			first = first->next->next->next->next;
			second = second->next;
			if (first == second)
				return (1);
		}
		else
			return (0);
	}
	return (0);
}

