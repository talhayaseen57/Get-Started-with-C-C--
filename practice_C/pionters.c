#include <stdio.h>

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

    return 0;
}