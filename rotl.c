#include "monty.h"
/**
  *f_rotl- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *hd = *head, *au;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	au = (*head)->next;
	au->prev = NULL;
	while (hd->next != NULL)
	{
		hd = hd->next;
	}
	hd->next = *head;
	(*head)->next = NULL;
	(*head)->prev = hd;
	(*head) = au;
}
