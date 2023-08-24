#include "monty.h"
/**
 * addnode - +s new node at the beginning of a stack.
 * @head: pointer to head of stack.
 * @n: value to be added to new node.
 * Return: 0
 */
void addnode(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
