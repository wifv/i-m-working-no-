#include<stdio.h>

int findmin(int a, int b){

    return (a < b) ? a : b;
}

/*
ternary operator

(condition)    ? if true : if false
return (a < b) ? a : b
*/

int main(){

    int min = findmin(23004, 120034);
    printf("%d", min);

    return 0;
}