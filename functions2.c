#include <stdio.h>

int max(int n1, int n2){
    if(n1 > n2) return n1;
    else return n2;
}

int main(){

    int maximum = 0;
    int a = 10;
    int b = 11;

    maximum = max(a, b);

    printf("%d\n", maximum);

    return 0;
}