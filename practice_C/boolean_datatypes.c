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

    if (number < 0) {
        printf("The given number is negative.\n");
    }
    else if (number == 0) {
        printf("The given number is 0.\n");
    }
    else {
        printf("The given number is positive.\n");
    }

    return 0;
}