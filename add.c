#include "monty.h"
/**
 * add -this adds the top two elements of the stack.
 * @head: pointer to head stack.
 * @num: The line no.
 * Return: 0
 */
void add(stack_t **head, unsigned int num)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", num);
		fclose(a.file);
		free(a.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
