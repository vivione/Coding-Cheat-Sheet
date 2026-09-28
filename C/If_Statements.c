#include <stdio.h>
#include <stdlib.h>

int main() {

    short temp_age;

    printf("Enter your age: ");
    scanf("%d", &temp_age);
    unsigned short age = abs(temp_age); // age can not be negative

    if (age >= 18) {
        printf("You are now signed up!\n");
    } else {
        printf("You are too young to sign up!\n");
    }

    return 0;
}