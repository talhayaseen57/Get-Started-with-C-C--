#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define squareRoot(n) sqrt(n)


int main() {
    double number;

    printf("Enter a  number: ");
    scanf("%lf", &number);

    double sqRoot = squareRoot(number);
    printf("Square root of %.2lf is %.2lf\n", number, sqRoot);

    return 0;
}