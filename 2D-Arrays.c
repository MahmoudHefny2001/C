#include <stdio.h>

int main(){
    int my2D_Array[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int i = 0; i < (sizeof(my2D_Array)/sizeof(my2D_Array[0])); i++){

        for(int j = 0; j < (sizeof(my2D_Array[0])/sizeof(my2D_Array[0][0])); j++) {
            printf("%d\t", my2D_Array[i][j]);
        }
        printf("\n");
    }

    return 0;
}