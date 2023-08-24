#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#define _GNU_SOURCE

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct j_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
} j_t;
extern j_t j;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char *clean_line(char *content);
void push(stack_t **head, unsigned int number);
void pall(stack_t **head, unsigned int number);
void pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int num, FILE *file);
void free_stack(stack_t *head);
void pop(stack_t **head, unsigned int num);
void swap(stack_t **head, unsigned int num);
void add(stack_t **head, unsigned int num);
void nop(stack_t **head, unsigned int num);
void sub(stack_t **head, unsigned int num);
void f_div(stack_t **head, unsigned int num);
void mul(stack_t **head, unsigned int num);
void mod(stack_t **head, unsigned int num);
void pchar(stack_t **head, unsigned int num);
void pstr(stack_t **head, unsigned int num);
void rotl(stack_t **head, unsigned int num);
void rotr(stack_t **head, __attribute__((unused)) unsigned int num);
void addnode(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int num);
void addqueue(stack_t **head, unsigned int num);
void stacck(stack_t **head, unsigned int num);
#endif
