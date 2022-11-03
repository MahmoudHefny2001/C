#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    float GPA;
};



int main(){

    struct Student student1 = {"Mahmoud", 2.3};
    struct Student student2 = {"Hefny", 3.2};
    struct Student student3 = {"Ebrahim", 3.0};
    struct Student student4 = {"Ahmed", 4.0};

    struct Student students[] = {student1, student2, student3, student4};

    printf("Name\t\tGPA\n");
    printf("----------------------\n");
    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        printf("%s\t ||\t%.1f\n", students[i].name, students[i].GPA);
    }

    return 0;
}