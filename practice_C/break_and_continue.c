#include <stdio.h>

int main () {
    int number;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if(number < 0) {
            if(number % 2 == 0) {
                printf("Negative even.\n");
                continue;
            }

            printf("%d\n", number);
            continue;
        }
        else if (number > 0) {
            printf("Positive value.\n");
            break;
        }
    }
    
    return 0;
}