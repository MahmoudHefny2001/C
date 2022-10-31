#include <stdio.h>

int main()
{
    // This is a comment
    /*
    This
    is
    a
    multiline
    comment
    */
    printf("I like pizza\n");
    printf("\n");

    /*
        escape sequence = character combination consisting of a backslash \
        followed by a letter or combination of digits.
        They specify a line or string of text.
        \n = new line
        \t = tab
    */
    printf("This\nis\na\nnew\nline\nescape\nsequence\nprinting\n");

    printf("\n1\t2\t3\n4\t5\t6\n7\t8\t9\n\n"); 

    printf("\"This is my quote\" -- \'Mahmoud Hefny\'\n");

    return 0;
}