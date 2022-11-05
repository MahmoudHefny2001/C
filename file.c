#include <stdio.h>

int main(){

    int x = 1;

    int y = &x;
    

    int* z = &y;

    printf("value :%d\n", x);
    printf("address: %p\n", y);

    // printf("dereference: %d\n", *y);

    printf("%d\n", &y);
    printf("%d\n",y);

    return 0;
}