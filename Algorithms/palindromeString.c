#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char string[]){

    int middle = strlen(string)/2;
    int length = strlen(string);

    for(int i = 0; i < middle; i++){
        if (string[i] != string[length - i - 1]){
            return false;
        }
    }

    return true;
}

int main(){

    char string1[] = "not a palindrome";
    char string2[] = "abccba";
    char string3[] = "abcdcba";

    if(is_palindrome(string3)){
        printf("%s\t - is a palindrome\n", string3);
    }
    else{
        printf("%s\t - is not a palindrome\n", string3);
    }
    return 0;
}