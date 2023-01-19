#include <stdio.h>
#include <math.h>

void pathagorous (double* a, double* b, double* c) {
    *a = pow(*a, 2);
    *b = pow(*b, 2);

    *c = sqrt(*a + *b);
}

int main() {
    double salary;

    printf("Enter the salary: ");
    scanf("%lf", &salary);

    double* ptr = &salary;
    printf("Salary: %.2lf\n", *ptr);
    
    *ptr = salary*2;
    printf("New salary: %.2lf\n", salary);

    int arr[] = {34, 12, 21, 54, 48};
    int largest = *arr;

    for (int i=1; i<5; i++) {
        if (largest < *(arr+i)) {
            largest = *(arr+i);
        }
    }

    printf("largest value in arr[] = %d\n", largest);

    // example for functions with pointers as arguments
    double a = 2;
    double b = 3; 
    double c;

    pathagorous(&a, &b, &c);

    printf("a = %.2lf\n", a);
    printf("b = %.2lf\n", b);
    printf("c = %.2lf\n", c);

    return 0;
}