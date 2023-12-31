#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_n, *au;

	au = *head;
	new_n = malloc(sizeof(stack_t));
	if (new_n == NULL)
	{
		printf("Error\n");
	}
	new_n->n = n;
	new_n->next = NULL;
	if (au)
	{
		while (au->next)
			au = au->next;
	}
	if (!au)
	{
		*head = new_n;
		new_n->prev = NULL;
	}
	else
	{
		au->next = new_n;
		new_n->prev = au;
	}
}
