#include <stdio.h>

int main() {
    char operator;
    double number1, number2, result;

    printf("Enter an operator ['+','-','*','/']: ");
    scanf("%c", &operator);

    printf("Enter a number: ");
    scanf("%lf", &number1);

    printf("Enter another number: ");
    scanf("%lf", &number2);

    switch (operator)
    {
    case '+':
        result = number1 + number2;
        break;

    case '-':
        result = number1 - number2;
        break;

    case '*':
        result = number1 * number2;
        break;

    case '/':
        result = number1 / number2;
        break;
    
    default:
        printf("Invalid operator.\n");
        return 0;
    }

    printf("%.2lf %c %.2lf = %.2lf\n", number1, operator, number2, result);

    return 0;
}