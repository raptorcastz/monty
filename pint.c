#include "monty.h"
/**
 * pint -prints the value at the top of the stack.
 * @head: A pointer to stack.
 * @num: The line number.
 */
void pint(stack_t **head, unsigned int num)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", num);
		fclose(a.file);
		free(a.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
