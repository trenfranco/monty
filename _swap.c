#include "monty.h"

int global;

/**
 * _swap - swaps the top two elements of the stack.
 * @stack: stack head
 * @line_number: line num
 * Return: void
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *a, *b, *c;

	a = *stack;
	b = a->next;
	c = a->next->next;
	if (temp->next == NULL || !stack || !(*stack))
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
	c->prev = *stack;
	b->prev = NULL;
	a->prev = a->next;
	a->next = b->next;
	b->next = *stack;
	*stack = b;

}
