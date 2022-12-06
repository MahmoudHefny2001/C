#include <stdio.h>

int main(){

    /*
    int i = 10;                         

    int *p, *q;

    p = &i;

    q = p;      //  >>> q = &i;

   --------------------------

   */


    // printf("%d %d\n", *p, *q);

    /* (q = p)  !=  (*q = *p) */

    /*
    
    int i = 10, j = 20;
    int *p , *q;
    p = &i;   ---->  *p = 10;
    q = &j;   ---->  *q = 20;

    *q = *p;  -------> j = 10;

    ---------------------------------


    int i = 1;
    int *p = &i;
    q = p;
    *p = 5;
    printf("%d\n", *p);

    */

    // int i = 1;
    // int *p = &i;
    // int *q;
    // q = p;
    // *q = 5;
    // printf("%d\n", *p);

    return 0;
}