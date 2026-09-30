#include <stdio.h>

int main() {

    // 2D arrays are arrays where each element are an entire array
    // They are usefull if you need a matix, a grid or a table of data

    int numbers[][3] = {{1, 2, 3}, {4, 5, 6}};

    int numbers_rows = sizeof(numbers) / sizeof(numbers[0]);
    int numbers_collumns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    for (int i = 0; i < numbers_rows; i++) {
        for (int j = 0; j < numbers_collumns; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}