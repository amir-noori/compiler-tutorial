#include <stdio.h>

#include "compiler.h"

int main()
{
    int result = compile_file("./test.c", "test", 0);
    if (result == COMPILER_FILE_COMPILED_OK)
    {
        printf("compile done.\n");
    }
    else if (result == COMPILER_FAILED_WITH_ERRORS)
    {
        printf("compilation error.\n");
    }
    else
    {
        printf("Unknown error with compilation!\n");
    }

    return 0;
}