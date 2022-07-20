#include<stdio.h>
int main(){

    char corf;
    float temp;
    float a = 32.0;
    float b = 9.0;
    float c = 5.0;

    printf("in F or C: ");
    scanf("%c", &corf);

    if(corf == 'C'){
        printf("enter the temperature: ");
        scanf("%f", &temp);
        temp = temp + b / c + a;
        printf("%f", temp);
    }

    else if(corf == 'F'){
        printf("enter the temperature: ");
        scanf("%f", &temp);
        temp = (temp - a) * c / b;
        printf("%f", temp);
    }

    else{
        printf("the \"%c\" is not valid", corf);
    }

    return 0;
}