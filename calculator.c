#include <stdio.h>

int main(){
    double num1 = 0.0f;
    double num2 = 0.0f;
    char math = '\0';
    double result = 0.0f;

    printf("Enter the value of the first number: ");
    scanf("%lf", &num1);
    printf("Enter the value of the second number: ");
    scanf("%lf", &num2);
    printf("Enter the operator: (+,-,*,/) ");
    scanf(" %c", &math);
    

    switch (math){
        case '+':
            result = num1+num2;
            printf("The result is %lf\n\n", result);
            break;
        case '-':
            result = num1-num2;
            printf("The result is %lf\n\n", result);
            break;
        case '*':
            result = num1*num2;
            printf("The result is %lf\n\n", result);
            break;
        case '/':
            result = num1/num2;
            printf("The result is %lf\n\n", result);
            break;
        default:
            printf("invalid value");
    }

    return 0;
}