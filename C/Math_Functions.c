#include <math.h>
#include <stdio.h>

int main() {

    short a = (short)sqrt(9);
    printf("%d\n", a);

    short b = pow(2, 4); // 2 to the power of 4
    printf("%d\n", b);

    short c = round(3.14);
    printf("%d\n", c);

    short d = ceil(3.14); // ceiling = always rouding up
    printf("%d\n", d);

    short e = floor(3.99); // floor = always rounding down
    printf("%d\n", e);

    unsigned short f = fabs(-100); // absolute value
    printf("%d\n", f);

    double g = log(3);
    printf("%lf\n", g);

    double h = sin(45);
    printf("%lf\n", h);

    double i = cos(45);
    printf("%lf\n", i);

    double j = tan(45);
    printf("%lf\n", j);

    return 0;
}