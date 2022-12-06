#include <stdio.h>

struct Point{
    double x;
    double y;
};

void print_point(const struct Point* self);

int main(){

    struct Point point1;
    point1.x = 5.0;
    point1.y = 16.8;

    print_point(&point1);

    return 0;
}

void print_point(const struct Point* self){
    printf("(%.3f, %.3f)\n", (*self).x, (*self).y);
}