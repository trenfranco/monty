#include "monty.h"

int global;

/**
 * _push - function that pushes a new node at beggining
 * @stack: stack head
 * @line_number: line num
 * Return: void
 */

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));

	if (!new)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	if (global == 0)
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}

	new->n = global;
	new->prev = NULL;

	if (*stack)
	{
		(*stack)->prev = new;
		new->next = *stack;
	}
	else
	{
		new->next = NULL;
	}
	*stack = new;

	
}
