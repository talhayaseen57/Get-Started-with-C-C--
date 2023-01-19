#include <stdio.h>

typedef enum DaysOfWeek {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
} weekDays;

int main() {
    // Way 1 to initialize enums.
    weekDays weekend1 = Sunday;

    // Way 2 to initialize enums.
    enum DaysOfWeek weekend2;
    weekend2 = Saturday;

    printf("Value of Sunday is %d.\n", weekend1);
    printf("Value of Saturday is %d.\n", weekend2);

    return 0;
}