#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char character;
    char word[50];
    char line[200];

    scanf("%c \n %s %[^\n]c", &character, word, line);
    
    printf("%c\n", character);
    printf("%s\n", word);
    printf("%s", line);
    
    return 0;
}