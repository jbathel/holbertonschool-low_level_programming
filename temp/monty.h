#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

<<<<<<< HEAD
/* Prototypes Used */
char **strtow(char *str, char *delim);
int _strpbrk(char *s, char accept);
int count_words(char *str, char *delim);
void push_node(stack_t **stack, unsigned int line_number);
=======

/* string helper functions */
int _cmpstrandlen(char *s1, char *s2);
>>>>>>> 1f1aaaaf3a169e2506fc0e10a7b6172fab4ec69d

#endif /* MONTY_H */
