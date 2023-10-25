#include <stdio.h>
#include <stdlib.h>
#include "lists.h" // Include the header file with the listint_t definition

/**
 * free_listint_safe - Frees a listint_t linked list and counts the nodes.
 * @h: A pointer to a pointer to the head of the list.
 * Return: The number of nodes in the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current = *h;

	while (current)
	{
		node_count++;
		if (current <= current->next)
		{
			*h = NULL; // Set the head to NULL before exiting
			return (node_count);
		}

		listint_t *temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL; 
	return (node_count);
}

