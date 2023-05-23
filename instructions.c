#include "monty.h"
#include <stdlib.h>

/**
 * push - Pushes an element to the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number in the Monty file.
 */
void push(stack_t **stack, unsigned int line_number)
{
    /* Check if the argument exists */
    if (/* Argument does not exist */)
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    /* Convert the argument to an integer */
    int value = /* Convert argument to integer using atoi() */;

    /* Create a new node */
    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    /* Assign values to the new node */
    new_node->n = value;
    new_node->prev = NULL;

    if (*stack != NULL)
    {
        new_node->next = *stack;
        (*stack)->prev = new_node;
    }
    else
    {
        new_node->next = NULL;
    }

    *stack = new_node;
}

/**
 * pall - Prints all the values on the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number in the Monty file.
 */
void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    /* Traverse the stack and print the values */
    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
