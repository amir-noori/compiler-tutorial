/**
 * Compiler Process
 */

#include <stdio.h>
#include <stdlib.h>

#include "compiler.h"

struct compile_process *compile_process_create(const char *input_file_name, const char *output_file_name, int flags)
{
    FILE *in_file = fopen(input_file_name, "r");

    if (!in_file)
    {
        printf("cannot read input file: %s\n", input_file_name);
        return NULL;
    }

    FILE *out_file = NULL;
    if (!output_file_name) // output file is optional
    {
        FILE *out_file = fopen(output_file_name, "w");

        if (!out_file)
        {
            printf("cannot read output file: %s\n", output_file_name);
            return NULL;
        }
    }

    struct compile_process *process = calloc(1, sizeof(struct compile_process));
    process->flags = flags;
    process->cfile.fp = in_file;
    process->ofile = out_file;
}