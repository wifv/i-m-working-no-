#include<stdio.h>
#include<math.h>

int main(){
    float A;
    float B;
    float C;

    printf("enter side A: ");
    scanf("%f",&A);

    printf("enter side B: ");
    scanf("%f",&B);
    
    C = sqrt(A*A + B*B);

    printf("side C: %f",C);

    return 0;
}