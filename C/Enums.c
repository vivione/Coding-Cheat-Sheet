#include <stdio.h>

enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {

    // enum is a user defined type of named integer identifiers
    // helps to make a program more readable

    enum Day today = Sunday;
    printf("%d\n", today);

    return 0;
}