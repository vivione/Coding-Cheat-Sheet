#include <stdio.h>

int main() {

    // continue statements skips the rest of the code and force the next
    // iteration of the loop
    // break statement exit a loop or a switch

    for (int i = 1; i <= 20; i++) {
        if (i == 13)
            continue;
        printf("%d\n", i);
    }

    return 0;
}