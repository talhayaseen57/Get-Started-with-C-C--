#include <stdio.h>

int main() {
    /*
    Addition and subtraction can be performed using "+" and "-" respectively.
    example:
        int + int = int
        double + double = double
        int + double = double  ...(because int is converted to double)
    */
    int a = 25;
    int b = 27;
    printf("a + b = %d + %d = %d\n", a, b, a+b);
    printf("a - b = %d - %d = %d\n", a, b, a-b);

    double c = 65.32;
    double d = 23.76;
    printf("c + d = %.2lf + %.2lf = %.2lf\n", c, d, c+d);
    printf("c - d = %.2lf - %.2lf = %.2lf\n", c, d, c-d);

    printf("a + c = %d + %.2lf = %.2lf\n", a, c, a+c);
    printf("b - d = %d - %.2lf = %.2lf\n", b, d, b-d);


    /*
    Dividion operator is "/".
    int / int = quotient(only)
    double / double = complete division
    int / double = (int) some random value with warning
    int / double = (double) returns decimal but quotient only without any warning
    */
    int x = 12;
    printf("x / 8 = %d / 8 = %d (quotient only)\n", x, x/8);

    double y = 12.00;
    printf("y / 8.00 = %.2lf / 8.00 = %.2lf (complete division)\n", y, y/8.00);


    /*
    Remaider opereator is "%".
    we call it modulus too.
    int % int = remainder (only)
    */
    printf("x mod 8 = %d mod 8 = %d (remainder only)\n", x, x%8);


    // in case of multiple opertors the order is the following:
    // div --> mul --> add --> sub
    
    return 0;
}