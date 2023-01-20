#include <iostream>

using namespace std;

int main() {
    std::cout << "Hello World!" << std::endl ;

    // swapping integers exercise
    int number_1 = 34;
    int number_2 = 56;

    cout << "number_1  = " << number_1 << endl 
         << "number_2  = " << number_2 << endl ;

    int temp;

    temp = number_1;
    number_1 = number_2;
    number_2 = temp;

    cout << "number_1  = " << number_1 << endl
         << "number_2  = " << number_2 << endl ;

    // declaration of constants, we cannot change the value of constant later in program
    const double pi = 3.14;

    // mathematical expressions
    double x = 10;
    double y = 5;
    double z = (x + 10) / (3 * y);
    cout << "z = " << z << endl;

    // printing on console
    int sales = 95000;
    cout << "Sales: $" << sales << endl;

    const double state_tax_rate = 0.04;
    const double county_tax_rate = 0.02;

    double state_tax = sales * state_tax_rate;
    double county_tax = sales * county_tax_rate;
    cout << "State tax: $" << state_tax << endl;
    cout << "County tax: $" << county_tax << endl;

    double total_tax = state_tax + county_tax;
    cout << "Total tax: $" <<total_tax << endl;

    return 0;
}