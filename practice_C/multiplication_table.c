#include <stdio.h>

void whileLoop(int number) {
    int count = 10;

    printf("Multiplication table of %d using while loop.\n", number);
    while (count >= 1) {
        printf("%d x %2d = %3d\n", number, count, number*count);
        count--;
    }
}

void forLoop(int number) {
    printf("Multiplication table of %d using foor loop.\n", number);
    for (int count = 1; count <= 10; count++) {
        printf("%d x %2d = %3d\n", number, count, number*count);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    whileLoop(number);
    forLoop(number);

    int sum = 0;
    for (int i=1; i<=100; i=i+1) {
        sum = sum + i;
    }
    printf("Sum of odd numbers from 1 to 99 = %d\n", sum);

    return 0;
}