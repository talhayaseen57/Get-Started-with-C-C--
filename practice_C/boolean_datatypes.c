#include <stdio.h>
#include <stdbool.h>

int main() {
    /*
    There are two boolean values in C:
    > "true" equals to (int)1
    > "false" equals to (int)0

    boolean operators are as follows:
    ">"  -- greater than
    "<"  -- less than
    "==" -- equal to
    "!=" -- not equal to
    "<=" -- less than or equal to
    ">=" -- greater than or equal to

    logical operators are as follows:
    "&&" -- AND
    "||" -- OR
    "!"  -- NOT
    */

    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    // using if else condictions
    printf("Using if-else conditions:\n");
    if (number < 0) {
        printf("The given number is negative.\n");
    }
    else if (number == 0) {
        printf("The given number is 0.\n");
    }
    else {
        printf("The given number is positive.\n\n");
    }

    /*
    Ternary operator:
    test_condition ? (if true)statement1 : (if false)statement2;
    */
    printf("Using ternary operator:\n");
    (number < 0) ? printf("The given number is negative.\n") : (number == 0) ? 
    printf("The given number is 0.\n") : printf("The given number is positive.\n");

    return 0;
}