#include <stdio.h>
#include <string.h>

union Data{
    int x;
    double y;
    char z[32];
};


int main(){
    
    union Data myData;
    myData.x = 10;
    myData.y = 20.5;
    // strcpy(myData.z, "text");

    printf("myData.x = %d\n", myData.x);
    printf("myData.y = %.2f\n", myData.y);
    // printf("myData.z = %s\n", myData.z); 

    return 0;
}