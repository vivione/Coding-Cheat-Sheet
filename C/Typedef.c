#include <stdio.h>

// typedef char user[25];

typedef struct {
    char name[25];
    char password[12];
    int id;
} User;

int main() {

    // typedef is a reserved keyword that gives an existing datatype a
    // "nickname"

    // user user1 = "Bro";

    User user1 = {"Bro", "password123", 0};
    User user2 = {"Bruh", "password321", 1};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    return 0;
}