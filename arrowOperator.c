#include <stdio.h>

typedef struct point{
    int x;
    int y;
}Point;

int main(){

    Point point1;

    point1.x = 0;
    point1.y = 0;

    Point *point2;
    point2 = &point1;

    printf("(%d, %d)\n", point2->x, point2->y);


    return 0;
}






/*
struct point{
    int x;
    int y;
};

typedef struct person{
    char name[25];
    int age;
}Person;

int main(){

    struct point p1;
    p1.x = 5;
    p1.y = 10;

    printf("point1: (%d, %d)\n", p1.x, p1.y);

    Person person1;
    strcpy(person1.name, "Hefny");
    person1.age = 21;

    printf("name: %s\nage: %d\n", person1.name, person1.age);

    return 0;
}
*/