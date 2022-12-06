#include <stdio.h>

// int main(){
//     int x = 5;
//     int *pointer = &x;
//     printf("Value of x: %d\n", x);
//     printf("Address of x: %p\n", &x);
//     printf("\nValue of *pointer: %d\n", *pointer);
//     printf("Address of the variable we pointer to : %p\n", pointer);
//     printf("Address of pointer itself: %p\n", &pointer);
//     *pointer = 6;
//     printf("\nAfter chainging value of pointer\n\n");
//     printf("Value of x: %d\n", x);
//     printf("Address of x: %p\n", &x);
//     printf("\nValue of *pointer: %d\n", *pointer);
//     printf("Address of the variable we pointer to: %p\n", pointer);
//     printf("Address of pointer itself: %p\n", &pointer);
//     return 0;
// }


int main(){

    int i = 10;
    int *pointer1, *pointer2;

    pointer1 = &i;

    pointer2 = pointer1;

    printf("%d %d\n", *pointer1, *pointer2);

    return 0;
}