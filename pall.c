#include "monty.h"
/**
 * pall -function to  print all the elements of the stack.
 * @head: A pointer to stack.
 * @num: The line number.
 */
void pall(stack_t **head, unsigned int num)
{
	stack_t *h;
	(void)num;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
