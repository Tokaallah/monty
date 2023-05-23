#include "monty.h"

int main(int argc, char *argv[])
{
    /* Check if the correct number of arguments is provided */
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    /* Open the file for reading */
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    /* Read the file line by line and process the instructions */
    char *line = NULL;
    size_t line_size = 0;
    ssize_t line_length;
    unsigned int line_number = 0;

    while ((line_length = getline(&line, &line_size, file)) != -1)
    {
        line_number++;

        /* Process the instruction in the line */

        /* Tokenize the line and extract the opcode and argument */

        /* Call the appropriate function based on the opcode */

        /* Free allocated memory and move to the next line */
    }

    /* Cleanup and close the file

