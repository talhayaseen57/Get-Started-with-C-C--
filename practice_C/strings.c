#include <stdio.h>
#include <string.h>

int main() {
    char fullName[20];

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Your correct name is %s", fullName);

    fullName[0] = 'X';
    printf("Your changed name is %s", fullName);
    

    char string1[20];
    char string2[20];

    printf("Enter first string: ");
    fgets(string1, 20, stdin);

    printf("Enter second string: ");
    fgets(string2, 20, stdin);

    if (strlen(string1)>strlen(string2)) {
        printf("%s\n", string1);
    }
    else {
        printf("%s\n", string2);
    }

    return 0;
}