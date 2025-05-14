#include <stdio.h>

/*
 * Macro can't be used to form a comment (see below)
 *
 * (in debug mode) Below example is not valid, because the macro PRINTF
 * will be replaced by '//', and in the preprocessor stage it will
 * become empty.
 */
#ifndef DEBUG
    #define PRINTF //
#else
    #define PRINTF printf
#endif

// #include "comment.h"

int main(int argc, char *argv[], char *envp[]) {
    // This is a comment
    // This is called c++ style comment
    // This is also called single line comment
    // c++ style comment can be // nested
    // c++ style can hold /* c style comment too */
    //
    // A note regarding backslash and newline
    // This comment \
       can be written \
       like this.

    /*
     * This is a comment
     * This is called c style comment
     * This is also called multi line comment
     * c style comment can hold // c++ style comment too
     */
    /* This can also be written as single line */

    printf("Hello, World!\n");
    return 0;
}