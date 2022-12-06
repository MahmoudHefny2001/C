#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char string1[10] = "First  ";
    char string2[10] = "    Second";

    strcat(string1, string2);

    printf("%s\n", string1);

    return 0;
}