#include <stdio.h>

int main() {

    const double PY = 3.141592;
    double radius;
    double circumference;
    double area;

    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PY * radius;
    area = PY * radius * radius;

    printf("Your circle circumference is: %lf\n", circumference);
    printf("Your circle area is: %lf\n", area);

    return 0;
}