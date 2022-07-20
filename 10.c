#include<stdio.h>
#include<ctype.h>

int main(){
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nenter an operator (/ * - +): ");
    scanf("%c",&operator);

    operator = toupper(operator);

    printf("\nenter first number: ");
    scanf("%lf",&num1);

    printf("\nenter second number: ");
    scanf("%lf",&num2);

    switch (operator)
    {
    case '*':
        result = num1 * num2;
        printf("%lf",result);
        break;
    
    case '/':
        result = num1 / num2;
        printf("%lf",result);
        break;

    case '+':
        result = num1 + num2;
        printf("%lf",result);
        break;
    
    case '-':
        result = num1 - num2;
        printf("%lf",result);
        break;
    
    default:
        printf("%c is not valid", operator);
        break;
    }

    return 0;
}