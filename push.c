#include "monty.h"
/**
 * push -pushes a new node onto the stack.
 * @head: A pointer to stack.
 * @num: The line number.
 */
void push(stack_t **head, unsigned int num)
{
	int d, b = 0, flag = 0;

	if (a.arg)
	{
		if (a.arg[0] == '-')
			b++;
		for (; a.arg[b] != '\0'; b++)
		{
			if (a.arg[b] > 57 || a.arg[b] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", num);
			fclose(a.file);
			free(a.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", num);
		fclose(a.file);
		free(a.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	d = atoi(a.arg);
	if (a.lifi == 0)
		addnode(head, d);
	else
		addqueue(head, d);
}
