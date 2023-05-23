#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

int main(int argc, char *argv[])
{
    FILE *file;
    char *line = NULL;
    size_t line_size = 0;
    ssize_t line_length = 0;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((line_length = getline(&line, &line_size, file)) != -1)
    {
        /* Process each line of the Monty file */
        /* Your code here */
    }

    free(line);
    fclose(file);

    return 0;
}

