#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][100] = {"1. What year did the C language debut?: ",
                             "2. Who is credited with creating C?: ",
                             "3. What is the predecessor of C?: "
                        };

    char options[][100] = {"A. 1969", "B. 1972", "C. 2010", "D. 1800",
                            
                           "A. Dennis Ritchie", "B. Nikolas Tesla", "C. Mohammed Salah", "D. Henedy",

                           "A. Objective-C", "B. B", "C. C++", "D. C#",
                        
                        };

    char answers[3] = {'B', 'A', 'B'};

    int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("QUIZ GAME\n");

    for (int i = 0; i < numberOfQuestions; i++){
        printf("\n*********************\n");
        printf("%s\n-------------------------\n", questions[i]);
        for (int j = (i*4) ; j < (i * 4) + 4; j++){
            printf("%s\n", options[j]); 
        }
        printf("Guess: ");
        scanf("%c", &guess);
        scanf("%c");

        guess = toupper(guess);

        if(guess == answers[i]){
            printf("Correct!\n");
            score++;
        }
        else{
            printf("Wrong :(\n");
        }

        // printf("*********************\n");
    }
    
    printf("*********************\n");
    printf("Final Score: %d/%d\n", score, numberOfQuestions);
    printf("*********************\n");

    return 0;
}