#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	dlistint_t *head = NULL;

	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);

	printf("Original list:\n");
	print_dlistint(head);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 5);
	printf("After deleting node at index 5:\n");
	print_dlistint(head);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	printf("After deleting node at index 0:\n");
	print_dlistint(head);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	printf("After deleting node at index 0:\n");
	print_dlistint(head);
	printf("-----------------\n");

	/* Additional delete_dnodeint_at_index calls go here */

	/* Free the list */
	free_dlistint(head);

	return (0);
}

