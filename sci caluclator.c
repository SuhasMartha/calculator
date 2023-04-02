#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2, result;
    
    printf("Enter an operator (+, -, *, /, ^, sin, cos, tan, sqrt): ");
    scanf("%c", &operator);
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    if(operator != '^' && operator != 's' && operator != 'c' && operator != 't' && operator != 'q') {
        printf("Enter second number: ");
        scanf("%lf", &num2);
    }
    
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
            break;
        case '/':
            if(num2 == 0) {
                printf("Error: Division by zero");
            }
            else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
            }
            break;
        case '^':
            result = pow(num1, 2);
            printf("%.2lf ^ 2 = %.2lf", num1, result);
            break;
        case 's':
            result = sin(num1);
            printf("sin(%.2lf) = %.2lf", num1, result);
            break;
        case 'c':
            result = cos(num1);
            printf("cos(%.2lf) = %.2lf", num1, result);
            break;
        case 't':
            result = tan(num1);
            printf("tan(%.2lf) = %.2lf", num1, result);
            break;
        case 'q':
            if(num1 < 0) {
                printf("Error: Square root of negative number");
            }
            else {
                result = sqrt(num1);
                printf("sqrt(%.2lf) = %.2lf", num1, result);
            }
            break;
        default:
            printf("Error: Invalid operator");
    }
    
    return 0;
}
