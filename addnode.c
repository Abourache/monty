#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

	stack_t *au, *new_n;

	au = *head;
	new_n = malloc(sizeof(stack_t));
	if (new_n == NULL)
	{ printf("Error\n");
		exit(0); }
	if (au)
		au->prev = new_n;
	new_n->n = n;
	new_n->next = *head;
	new_n->prev = NULL;
	*head = new_n;
}