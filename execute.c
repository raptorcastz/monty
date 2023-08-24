#include "monty.h"
/**
 * execute - executes the opcode.
 * @stack: A pointer to the head  stack.
 * @num: The line counter.
 * @file: A pointer to monty file.
 * @content:  line content.
 * Return: 0 if success, 1 if opcode missing
 */
int execute(char *content, stack_t **stack, unsigned int num, FILE *file)
{
	instruction_t opst[] = {
		{"push", push}, {"pall", pall},
		{"pint", pint}, {"pop", pop}, {"swap", swap},
		{"add", add}, {"nop", nop}, {"sub", sub},
		{"div", f_div}, {"mul", mul}, {"mod", mod},
		{"pchar", pchar}, {"pstr", pstr}, {"rotl", rotl},
		{"rotr", rotr}, {"queue", addqueue},
		{"stack", stacck}, {NULL, NULL}};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	j.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stack, num);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: instruction unknown %s\n", num, op);
		fclose(file);
		free(j.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
