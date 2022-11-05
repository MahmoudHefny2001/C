#include <stdio.h>

int main(){

    FILE *FilePointer = fopen("file.txt", "wra");

    fprintf(FilePointer, "SOME TEXT\n\nSOME NEW TEXT");

    fclose(FilePointer);

    return 0;
}