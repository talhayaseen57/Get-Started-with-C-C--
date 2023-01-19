#include <stdio.h>

int multiply(int number);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int product = multiply(number);
    printf("Product of %d natural numbers = %d\n", number, product);

    return 0;
}

int multiply(int number) {
    int result = 1;

    if (number > 0) {
        result = number * multiply(number-1);
    }

    return result;
}