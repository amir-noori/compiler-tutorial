
#include "compiler.h"


int compile_file(const char* input_file, const char* output_file, int flags)
{

    struct compile_process *process = compile_process_create(input_file, output_file, flags);
    if(!process)
    {
        return COMPILER_FAILED_WITH_ERRORS;
    }

    // lexical analysis



    // parsing

    

    // code generation


    return COMPILER_FILE_COMPILED_OK;
}