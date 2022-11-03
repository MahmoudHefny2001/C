#include <stdio.h>
#include <string.h>

// typedef = reserved keyword that gives an existing datatype a "nickname"
// typedef char user[25];

typedef struct {
    char name[25];
    char password[15];
    int ID;
} User;

int main(){

    User user1 = {"Mahmoud", "MA7MOUD7EFNY.", 2000025};
    User user2 = {"Hefny", "123456789", 505020};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.ID);

    printf("\n%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.ID);

    return 0;
}