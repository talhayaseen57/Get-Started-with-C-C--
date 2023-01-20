#include <iostream>
#include <cmath>

#define PI 3.14

using namespace std;

int main() {
    // coversion of Fahrenheit to Celsius
    double temperature_fahrenheit;
    double temperature_celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> temperature_fahrenheit;

    temperature_celsius = (temperature_fahrenheit - 32) / 1.8;

    cout << "Temperature in Celsius: " << temperature_celsius << endl;

    // calcuation of area of circle
    double radius;
    double area;

    cout << "Enter the radius of circle: ";
    cin >> radius;

    area = PI * pow(radius, 2);
    cout << "Area of circle with radius " << radius 
         << " is " << area << endl;

    return 0;
}