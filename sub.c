#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *au;
	int ns, sus;

	au = *head;
	for (ns = 0; au != NULL; ns++)
		au = au->next;
	if (ns < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	au = *head;
	sus = au->next->n - au->n;
	au->next->n = sus;
	*head = au->next;
	free(au);
}
