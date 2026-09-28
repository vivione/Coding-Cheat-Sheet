#include <stdio.h>

int main() {

    // format specifier % define and format a type of data to be displayed

    // %c = chararacter
    // %s = string (array of character)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum feild width
    // %- = left align

    // Example of a store:
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item1: $%.2f\n", item1);
    printf("Item2: $%.2f\n", item2);
    printf("Item3: $%.2f\n", item3);
}