#include <stdio.h>

int main(){
    int x = 5;
    int *intPointer = &x;

    /*
    int var = 8;
    int *pointer;
    pointer = &var;
    int m = 40, *somePointer = &m;
    */


    char c = 'C';
    char *charPointer = &c;

    double someValue = 2.6;
    double *doublePointer = &someValue;

    int intArray[] = {1, 2, 3, 4, 5};
    // int *intArrayPointer = &intArray;

    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    // char *charArrayPointer = &charArray;

    /*
    
    int z = 5;
    int *ptr;
    ptr = &z;
    printf("%d\n", *ptr);

    int x = 10;
    int *ptr = &x;

    *ptr = 4; -->  x = 4;

    printf("%d\n", *ptr);    >>>>    output = 4


    int *pointer;
    *pointer = 1;

    Output:
    Segmentation Fault (SIGSEGV)  >>>> Usually segmentation fault is caused by program trying to read or write an illegal memory location

    */


    return 0;
}