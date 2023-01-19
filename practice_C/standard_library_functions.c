#include <stdio.h>
#include <math.h>

int main() {
    /*
    <stdio.h> header file contains standard functions like:
        *** printf(): to print on console
        *** scanf(): to get value from keyboard

    <math.h> 
    */
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    double sqRoot = sqrt(number);
    printf("Square Root of %d is %lf\n", number, sqRoot);

    double powerToSqRoot = pow(number, sqRoot);
    printf("%d^%lf = %lf", number, sqRoot, powerToSqRoot);

    return 0;
}