#include <ctype.h>
#include <stdio.h>

int main() {

    int count = 0;

    float temp;
    char unit;

    do {
        printf("Enter a temperature: ");
        scanf("%f %c", &temp, &unit);

        switch (unit) {
        case 'C':
            temp = (temp * 9 / 5) + 32;
            printf("The temperature is %.1f F\n", temp);
            break;
        case 'F':
            temp = ((temp - 32) * 5) / 9;
            printf("The temperature is %.1f C\n", temp);
            break;
        default:
            printf("Unit can only be C or F\n");
            break;
        }

        count++;
    } while (unit != 'C' && unit != 'F' && count < 10);

    printf("Exceeded the number of executions\n");

    return 0;
}