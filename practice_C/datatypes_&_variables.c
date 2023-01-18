#include <stdio.h>

int main() {
    /*
    > Integers are declared using int.
    > int has size of 4 bytes.
    > so we can declare 2^32 integer numbers.
    > format specifier: %d
    */
    int number1 = 57;
    printf("int number1 = %d\n\n", number1);


    /*
    > decimal numbers are declared using double/float.
    > by default they get 6 decimal digits.
    > double has more precision than float datatype.
    double:
        double has size of 8 bytes.
        format specifier: %lf
    float:
        float has size of 4 bytes.
        format specifier: %f
    */
    double number2 = 57.42;
    printf("default double number2 = %lf\n", number2);
    printf("formated double number2 = %.2lf\n", number2);

    float number3 = 73.25;
    printf("defalut float number3 = %f\n", number3);
    printf("formated float number3 = %.2f\n", number3);

    double number4 = 42.77e5;
    printf("exponential double number4 = %lf\n\n", number4);


    /*
    > Characters are stored as char.
    > char has size of 1 byte.
    > format specifier: %c
    > charaters are actually stored as integers, which we can see by using %d as format specifier.
    */
    char character = 's';
    printf("character = %c\n", character);
    printf("character int value = %d\n\n", character);

    return 0;
}