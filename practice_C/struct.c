#include <stdio.h>

typedef struct ComplexNumber {
    double realPart;
    double imaginaryPart;
} complexNumber;


int main() {
    // Way 1 to initialize a struct variable.
    complexNumber number1 = {.realPart = 98.43, .imaginaryPart = 89.99};

    // Way 2 to initialize a struct variable.
    struct ComplexNumber number2 = {.realPart = 34.67, .imaginaryPart = 12.87};

    // Way 3 to initialize a struct variable.
    struct ComplexNumber number3;
    number3.realPart = 45.23;
    number3.imaginaryPart = 35.12;

    complexNumber result;
    result.realPart = number1.realPart - number2.realPart - number3.realPart;
    result.imaginaryPart = number1.imaginaryPart - number2.imaginaryPart - number3.imaginaryPart;

    printf("Result is %.2lf + %.2lfi\n", result.realPart, result.imaginaryPart);

    return 0;
}