#include <stdio.h>

int main() {

    // switch statements are a most efficient way to using many "else if"
    // statements and allow a value to be tested for equality against many cases

    char grade;

    do {
        printf("Enter a letter grade: ");
        scanf("%c", &grade);

        switch (grade) {
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did okay!\n");
            break;
        case 'D':
            printf("At least it's not an F!\n");
            break;
        case 'F':
            printf("You failed!\n");
            break;
        default:
            printf("This is not a valide grade!\n");
            break;
        }
    } while (grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' &&
             grade != 'F');

    return 0;
}