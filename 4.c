#include<stdio.h>

int main(){
    float PI = 3.14159;
    float radius;
    float circumference;
    float area;
    printf("enter the radius of circle: ");
    scanf("%f", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("circumference: %lf", circumference);
    printf("\narea: %lf", area);
    return 0;
}