#include<stdio.h>

void id(char name[], int age){
    printf("name - %s", name);
    printf("\nage - %d", age);


}

int main(){

    char name[] = "mol";
    int age = 15;

    id(name, age);
    id(name, age);


    return 0;
}