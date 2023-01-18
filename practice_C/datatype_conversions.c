#include <stdio.h>

int main() {
    /*
    data type conversion occurs in the following hierarchical order:
    (from bottom to up)
    > long double
    > double
    > float
    > long
    > int
    > short
    > char
    i.e. int + char = int + (int)char = int
    i.e. int + double = (double)int + double = double
    
    !!!! (imlicit type conversion)
    !!!! in case if we are storing value in any variable, 
    !!!! it be converted to the datatype of that vaiarble.
    !!!! int a = 8.00 ---> a = 8

    !!!! (explicit type conversion)
    !!!! casting a datatype to a value or variable.
    */

    return 0;
}