#include "monty.h"
#include <stdlib.h>
/**
 * push - Pushes an element to the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number being interpreted from the Monty file.
 */
void push(stack_t **stack, unsigned int line_number)
{
    int value;

    if (!stack)
    {
        fprintf(stderr, "L%u: Stack does not exist\n", line_number);
        exit(EXIT_FAILURE);
    }

    if (!data || !data->arg)
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    value = atoi(data->arg);

    if (value == 0 && strcmp(data->arg, "0") != 0)
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    add_node(stack, value);
}

/**
 * pall - Prints all the values on the stack, starting from the top.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number being interpreted from the Monty file.
 */
void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    (void)line_number;

    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}

