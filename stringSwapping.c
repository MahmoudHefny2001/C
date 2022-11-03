#include <stdio.h>
#include <string.h>

int main(){

    char string1[50] = "Mahmoud";
    char string2[50] = "Hefny";

    printf("Before swap:\n");
    printf("%s\n", string1);
    printf("%s\n", string2);

    char swapper[50];

    strcpy(swapper, string1);
    strcpy(string1, string2);
    strcpy(string2, swapper);

    printf("\nAfter swap:\n");
    printf("%s\n", string1);
    printf("%s\n", string2);

    return 0;
}