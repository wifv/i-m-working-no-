#include<stdio.h>
/*
function ptototype in line 5
*/
void hello(char[], int);

int main(){

    char name[] = "abduaziz";
    int age = 15;

    hello(name, age);

    return 0;
}

void hello(char name[], int age){

    printf("hello %s ,you are %d years old", name, age);
}