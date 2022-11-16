#include <stdio.h>
#include <ctype.h> 

int numberOfVowels(char string[], int length);

int main(){

    char string[] = "It's a wonderful life!";        // 7 vowels

    int length = sizeof(string)/sizeof(string[0]);

    int counter = numberOfVowels(string, length);

    printf("The number of vowels in '%s' is %d\n", string, counter);

    return 0;
}

int numberOfVowels(char string[], int length){

    int counter = 0;
    for (int i = 0; i < length; i++){
        if(tolower(string[i]) == 'a' || tolower(string[i]) == 'o' || tolower(string[i]) == 'e' || tolower(string[i]) == 'i' || tolower(string[i]) == 'u'){
            counter++;
        }    
    }
    return counter;
}