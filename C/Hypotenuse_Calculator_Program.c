#include <math.h>
#include <stdio.h>

int main() {

    double a;
    double b;
    double c;

    printf("Enter side a: ");
    scanf("%lf", &a);
    printf("Enter side b: ");
    scanf("%lf", &b);

    c = sqrt(pow(a, 2) + pow(b, 2));
    printf("Side c: %lf", c);

    return 0;
}