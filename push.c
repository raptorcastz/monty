#include "monty.h"
/**
 * push -pushes a new node onto the stack.
 * @head: A pointer to stack.
 * @num: The line number.
 */
void push(stack_t **head, unsigned int num)
{
	int a, b = 0, flag = 0;

	if (j.arg)
	{
		if (j.arg[0] == '-')
			b++;
		for (; j.arg[b] != '\0'; b++)
		{
			if (j.arg[b] > 57 || j.arg[b] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", num);
			fclose(j.file);
			free(j.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", num);
		fclose(j.file);
		free(j.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = atoi(j.arg);
	if (j.lifi == 0)
		addnode(head, a);
	else
		addqueue(head, a);
}