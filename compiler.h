#ifndef PEACHCOMPILER_H
#define PEACHCOMPILER_H

#include <stdio.h>


enum
{
    COMPILER_FILE_COMPILED_OK,
    COMPILER_FAILED_WITH_ERRORS
};

struct compile_process
{
    // flags to specify how the file should be compiled
    int flags;

    struct compile_porcess_input_file
    {
        FILE *fp;
        const char *absolue_path;
    } cfile;

    FILE *ofile;
};

int compile_file(const char *input_file, const char *output_file, int flags);

struct compile_process *compile_process_create(const char *input_file_name, const char *output_file_name, int flags);

#endif