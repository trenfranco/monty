#include "monty.h"

int global;

/**
 * _pall - prints all the values on the stack, starting from the top of the stack.
 * @stack: stack head
 * @line_number: line num
 * Return: void
 */

void _pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{

	while (*stack)
	{
		printf("%d", (*stack)->n);
		*stack = (*stack)->next;
	}
}
